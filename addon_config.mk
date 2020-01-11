# common:
# 	ADDON_INCLUDES = libs/Irrlicht/include

linux64:
	ADDON_LIBS = libs/Irrlicht/lib/linux64/libIrrlicht.a
	ADDON_LIBS += libs/Irrlicht/lib/linux64/libirrBullet.a

msys2:
	ADDON_LIBS = libs/Irrlicht/lib/linux64/libIrrlicht.a

osx:
	ADDON_LIBS = libs/Irrlicht/lib/os8.6/libIrrlicht.a

android/x86:
	ADDON_LIBS = libs/Irrlicht/lib/linux64/libIrrlicht.a

android/armeabi-v7a:
	ADDON_LIBS = libs/Irrlicht/lib/linux64/libIrrlicht.a

android/arm64-v8a:
	ADDON_LIBS = libs/Irrlicht/lib/linux64/libIrrlicht.a
