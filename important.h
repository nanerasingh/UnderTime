#define PLIST_PATH @"/var/mobile/Library/Preferences/com.mpg13.undertime.plist"


inline bool GetPrefBool(NSString *key)
{
return [[[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH] valueForKey:key] boolValue];
}

inline *NSString GetPrefString(NSString *key)
{
return [[NSDictionary dictionaryWithContentsOfFile:PLIST_PATH] objectForKey:key];
}
