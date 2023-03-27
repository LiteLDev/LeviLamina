#pragma once
#include "llapi/Global.h"

class StringReader {
    std::string str;
    size_t len = 0;
    std::string::const_iterator begin;
    std::string::const_iterator end;
    std::string::const_iterator it;

public:
    LLAPI explicit StringReader(const std::string& str);
    LLAPI explicit StringReader(const char* str);
    LLAPI StringReader(const char* str, size_t len);
    LLAPI StringReader(const StringReader& other);
    LLAPI StringReader(StringReader&& other) noexcept;
    LLAPI StringReader& operator=(const StringReader& other);
    LLAPI StringReader& operator=(StringReader&& other) noexcept;

    LLAPI bool isEmpty() const;
    LLAPI bool isEnd() const;
    LLAPI bool isStart() const;
    LLAPI bool isValid() const;
    LLAPI size_t getPos() const;
    LLAPI size_t getLength() const;
    LLAPI size_t getRemaining() const;

    LLAPI char read();
    LLAPI char read(char& c);
    LLAPI std::string read(size_t len);
    LLAPI std::string readUntil(char c);
    LLAPI std::string readUntil(const std::string& chars);
    LLAPI std::string readUntilNot(const std::string& chars);
    LLAPI std::string readUntilNot(char c);
    LLAPI std::string readLine();
    LLAPI std::string readLetters(const std::string& chars = "");
    LLAPI std::string readLower(const std::string& chars = "");
    LLAPI std::string readUpper(const std::string& chars = "");
    LLAPI std::string readDigits(const std::string& chars = "");
    LLAPI std::string readLettersAndDigits(const std::string& chars = "");
    LLAPI std::string readVariableName();
    LLAPI std::string readToEnd();
    LLAPI char peek();
    LLAPI char peek(char& c);
    LLAPI char peek(size_t offset);
    LLAPI std::string peek(size_t offset, size_t len);
    LLAPI void skip();
    LLAPI void skip(size_t len);
    LLAPI void skipUntil(char c);
    LLAPI void skipUntil(const std::string& chars);
    LLAPI void skipUntilNot(char c);
    LLAPI void skipUntilNot(const std::string& chars);
    LLAPI void skipWhitespace();
    LLAPI void skipLine();
    LLAPI void skipLetters(const std::string& chars = "");
    LLAPI void skipLower(const std::string& chars = "");
    LLAPI void skipUpper(const std::string& chars = "");
    LLAPI void skipDigits(const std::string& chars = "");
    LLAPI void skipLettersAndDigits(const std::string& chars = "");


    template <typename T>
    inline T readInteger() {
        T result = 0;
        while (isValid() && isdigit(read())) {
            result = result * 10 + (read() - '0');
        }
        return result;
    }
};
