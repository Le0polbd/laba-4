// 13_september.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <math.h>


int _tmain(int argc, _TCHAR* argv[])
{
	struct Pointer
	{
		float x;
		float y;
	};

	typedef struct Pointer ben;
	struct Triangle
	{
		ben a;
		ben b;
		ben c;
		int A;
		int B;
		int	C;

		float S;
		int P;
	};
 
	typedef struct Triangle two;

	two r;
	r.a.x = 3;
	r.a.y = 3;
	r.b.x = 8;
	r.b.y = 4;
	r.c.x = 5;
	r.c.y = 2;

	r.A = sqrt((r.b.x - r.a.x)*(r.b.x - r.a.x) + (r.b.y - r.a.y)*(r.b.x - r.a.y));
	r.B = sqrt((r.c.x - r.a.x)*(r.c.x - r.a.x) + (r.c.y - r.a.y)*(r.c.x - r.c.y));
	r.C = sqrt((r.a.x - r.a.x)*(r.a.x - r.a.x) + (r.a.y - r.a.y)*(r.a.x - r.a.y));
	r.P = r.A + r.B + r.C;
	float p = (r.A + r.B + r.C)/ 2;
	r.S = sqrt(p*(p - r.A)*(p - r.B)*(p - r.C));
	
	printf("A=%d\nB=%d\nC=%d\nP=%d\nS=%d\n", r.A, r.B, r.C, r.P, r.S);

	return 0;
}

