#ifndef HALAL_MBSTRING_H
#define HALAL_MBSTRING_H

#include <string>

/** Replaces invalid UTF-8 characters or character sequences with question marks. */
std::string SanitizeInvalidUTF8(const std::string& s);

#endif // HALAL_MBSTRING_H
