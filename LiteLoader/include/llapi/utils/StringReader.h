#pragma once
#include "llapi/Global.h"

class StringReader {

    const std::string str;
    size_t len = 0;
    std::string::const_iterator begin;
    std::string::const_iterator end;
    std::string::const_iterator it;

public:
    LIAPI StringReader(const std::string& str);
    LIAPI StringReader(const char* str);
    LIAPI StringReader(const char* str, size_t len);
    LIAPI StringReader(const StringReader& other) = default;
    LIAPI StringReader(StringReader&& other) = default;
    LIAPI StringReader& operator=(const StringReader& other) = default;
    LIAPI StringReader& operator=(StringReader&& other) = default;

    LIAPI bool isEmpty() const;
    LIAPI bool isEnd() const;
    LIAPI bool isStart() const;
    LIAPI bool isValid() const;
    LIAPI size_t getPos() const;
    LIAPI size_t getLength() const;
    LIAPI size_t getRemaining() const;

    LIAPI char read();
    LIAPI char read(char& c);
    LIAPI std::string read(size_t len);
    LIAPI std::string readUntil(char c);
    LIAPI std::string readUntil(const std::string& chars);
    LIAPI std::string readUntilNot(const std::string& chars);
    LIAPI std::string readUntilNot(char c);
    LIAPI std::string readLine();
    LIAPI std::string readLetters(const std::string& chars = "");
    LIAPI std::string readLower(const std::string& chars = "");
    LIAPI std::string readUpper(const std::string& chars = "");
    LIAPI std::string readDigits(const std::string& chars = "");
    LIAPI std::string readLettersAndDigits(const std::string& chars = "");
    LIAPI std::string readVariableName();
    LIAPI std::string readToEnd();
    LIAPI char peek();
    LIAPI char peek(char& c);
    LIAPI char peek(size_t offset);
    LIAPI std::string peek(size_t offset, size_t len);
    LIAPI void skip();
    LIAPI void skip(size_t len);
    LIAPI void skipUntil(char c);
    LIAPI void skipUntil(const std::string& chars);
    LIAPI void skipUntilNot(char c);
    LIAPI void skipUntilNot(const std::string& chars);
    LIAPI void skipWhitespace();
    LIAPI void skipLine();
    LIAPI void skipLetters(const std::string& chars = "");
    LIAPI void skipLower(const std::string& chars = "");
    LIAPI void skipUpper(const std::string& chars = "");
    LIAPI void skipDigits(const std::string& chars = "");
    LIAPI void skipLettersAndDigits(const std::string& chars = "");


    template <typename T>
    inline T readInteger() {
        T result = 0;
        while (isValid() && isdigit(read())) {
            result = result * 10 + (read() - '0');
        }
        return result;
    }
};
