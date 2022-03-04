#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "debug.h"

#include "gltf_loader.h"

int main(){
	InitDebug();

	GLTFState gltf = GLTFOpen("../assets/monkey.gltf");
	GLTFFree(&gltf);

	QuitDebug();

	getchar();

	return 0;
}