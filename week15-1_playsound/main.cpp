#include <windows.h>
#include <GL/glut.h>
int main()
{
    ///PlaySound(TEXT("mykbeat.wav"), NULL, SND_FILENAME);
    PlaySound("do.wav", NULL, SND_SYNC);
    PlaySound("re.wav", NULL, SND_SYNC);
    PlaySound("mi.wav", NULL, SND_SYNC);
    PlaySound("fa.wav", NULL, SND_SYNC);
}
