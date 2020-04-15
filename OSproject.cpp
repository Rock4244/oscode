#include<Pthread.h> //for thread funtion
#include<studio.h>
void *s1()
{
	int pen;
	pthread_mutex_lock(&l);
	sem_wait(&s);
	pen=t;
	pen=pen+paper+questionpaper;
	t=paper;
	sem_post(&s);
	
	
}
void *s2()
{
	int questionpaper;
	pthread_mutex_lock(&l);
	sem_wait(&s);
	questionpaper=t;
	questionpaper=questionpaper+paper+pen;
	sleep(2);
	t=questionpaper;
	sem_post(&s);
}
void *s3()
{
    int paper;
	pthread_mutex_lock(&l);	
    sem_wait(&S);
    paper=t;
    paper=paper+pen+questionpaper;
    t=paper;
    sem_post(&s);
}
void *t()
{
	
	int pen;
	int paper;
	int question paper;
}
int main()
{
	sem_init(&s,0,1);
	pthread_mutex_init(&l,NULL)
	pthread_t s1,s2,s3,t1;
	pthread_create(&s1,NULL,&fs1,NULL);
	pthread_join(&s1,NULL);
	pthread_create(&s2,NULL,fs2,NuLL);
	pthread_join(&s2,NULL);
	pthread_create(&s3,NULL,fs3,NULL);
	pthread_join(&s3,NULL);
	pthread_create(&t,NULL,ft,NULL);
	pthread_join(&t,NULL);
	
	
}
void s1();
void s2();
void s3();
void t1();
sem_t s;
int t;
pthread_mutex_t l;
