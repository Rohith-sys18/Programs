#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<unistd.h>
sem_t mutex;
void*thread(void*arg){
	sem_wait(&mutex);
	printf("enetred thread\n");
	sleep(4);
	printf("removed thread\n");
	sem_post(&mutex);
}
int main(){
	sem_init(&mutex,0,1);
	pthread_t t1,t2;
	pthread_create(&t1,NULL,thread,NULL);
	sleep(2);
	pthread_create(&t2,NULL,thread,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	sem_destroy(&mutex);
	return 0;
}
