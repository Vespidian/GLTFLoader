# JSONConfigure
Simple, quick, and easy JSON Library for reading any JSON files

#### [Example Usage](src/tests/example.c) - See also [all the test files](src/tests/)

#### Notes
- When using strings returned by 'JSONTokenValue' (JSONToken._string) make sure you copy them if you plan to use them after freeing the 'JSONState' from which you generated them
- When using a 'JSONToken' you should only access the type which 'JSONToken.type' specifies
- Dictionaries passed to 'JSONTokenHash' **must** be NULL terminated
- Some variables in 'JSONState' are only used internally
