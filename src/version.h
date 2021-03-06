#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "06";
	static const char MONTH[] = "02";
	static const char YEAR[] = "2013";
	static const char UBUNTU_VERSION_STYLE[] = "13.02";
	
	//Software Status
	static const char STATUS[] = "Beta";
	static const char STATUS_SHORT[] = "b";
	
	//Standard Version Type
	static const long MAJOR = 0;
	static const long MINOR = 5;
	static const long BUILD = 46;
	static const long REVISION = 22;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 44;
	#define RC_FILEVERSION 0,5,46,22
	#define RC_FILEVERSION_STRING "0, 5, 46, 22\0"
	static const char FULLVERSION_STRING[] = "0.5.46.22";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 31;
	

}
#endif //VERSION_H
