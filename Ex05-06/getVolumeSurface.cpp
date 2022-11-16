#include"getVolumeSurface.h"

void getVolumeSurface(BOX*box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->y * box->z + box->x * box->z);
	return;
}
bool isSendable(BOX*box) {
	double packSize = box->x + box->y + box->z;
	const double size1 = 60;
	const double size2 = 80;
	const double size3 = 100;
	const double size4 = 120;
	const double size5 = 140;
	const double size6 = 160;
	const double size7 = 180;
	const double size8 = 200;

	if(packSize<size1){
		box->packSize = size1;
		return true;
	}
	else if (packSize < size2) {
		box->packSize = size2;
		return true;
	}
	else if (packSize < size3) {
		box->packSize = size3;
		return true;
	}
	else if (packSize < size4) {
		box->packSize = size4;
		return true;
	}
	else if (packSize < size5) {
		box->packSize = size5;
		return true;
	}
	else if (packSize < size6) {
		box->packSize = size6;
		return true;
	}
	else if (packSize < size7) {
		box->packSize = size7;
		return true;
	}
	else if (packSize < size8) {
		box->packSize = size8;
		return true;
	}
	else {
		return false;
	}
}