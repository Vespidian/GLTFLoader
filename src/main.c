#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "debug.h"

#include "gltf.h"

int main(){
	InitDebug();

	GLTF gltf = GLTFOpen("../assets/monkey.gltf");

	GLTFReload(&gltf);

	GLTFFree(&gltf);

	QuitDebug();

	getchar();

	return 0;
}