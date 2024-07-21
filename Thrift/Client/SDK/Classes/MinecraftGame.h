#pragma once

#include "../../Utils/Utils.h"

class Font {
private:
	virtual void constructor();
	virtual void a1();
	virtual void a2();
	virtual void a3();
	virtual void a4();
	virtual void a5();
public:
	virtual float getLineLength(std::string* str, float textSize, bool unknown);
	virtual float getLineHeight();
};

class MinecraftGame {
public:
	BUILD_ACCESS(bool, canUseKeys, 0x1A8);//good for 1.20.62
	BUILD_ACCESS(Font*, mcfont, 0xF48);//good for 1.20.51
};