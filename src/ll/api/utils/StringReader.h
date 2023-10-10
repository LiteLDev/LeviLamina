#pragma once
#include "ll/api/base/Global.h"

class StringReader {
    std::string                 str;
    size_t                      length = 0;
    std::string::const_iterator begin;
    std::string::const_iterator end;
    std::string::const_iterator it;

public:
    LLAPI explicit StringReader(std::string const& str);
    LLAPI explicit StringReader(const char* str);
    LLAPI               StringReader(const char* str, size_t len);
    LLAPI               StringReader(StringReader const& other);
    LLAPI               StringReader(StringReader&& other) noexcept;
    LLAPI StringReader& operator=(StringReader const& other);
    LLAPI StringReader& operator=(StringReader&& other) noexcept;

    LLAPI bool   isEmpty() const;
    LLAPI bool   isEnd() const;
    LLAPI bool   isStart() const;
    LLAPI bool   isValid() const;
    LLAPI size_t getPos() const;
    LLAPI size_t getLength() const;
    LLAPI size_t getRemaining() const;

    LLAPI char read();
    LLAPI char read(char& c);
    LLAPI std::string read(size_t len);
    LLAPI std::string readUntil(char c);
    LLAPI std::string readUntil(std::string const& chars);
    LLAPI std::string readUntilNot(std::string const& chars);
    LLAPI std::string readUntilNot(char c);
    LLAPI std::string readLine();
    LLAPI std::string readLetters(std::string const& chars = "");
    LLAPI std::string readLower(std::string const& chars = "");
    LLAPI std::string readUpper(std::string const& chars = "");
    LLAPI std::string readDigits(std::string const& chars = "");
    LLAPI std::string readLettersAndDigits(std::string const& chars = "");
    LLAPI std::string readVariableName();
    LLAPI std::string readToEnd();
    LLAPI char        peek();
    LLAPI char        peek(char& c);
    LLAPI char        peek(size_t offset);
    LLAPI std::string peek(size_t offset, size_t len);
    LLAPI void        skip();
    LLAPI void        skip(size_t len);
    LLAPI void        skipUntil(char c);
    LLAPI void        skipUntil(std::string const& chars);
    LLAPI void        skipUntilNot(char c);
    LLAPI void        skipUntilNot(std::string const& chars);
    LLAPI void        skipWhitespace();
    LLAPI void        skipLine();
    LLAPI void        skipLetters(std::string const& chars = "");
    LLAPI void        skipLower(std::string const& chars = "");
    LLAPI void        skipUpper(std::string const& chars = "");
    LLAPI void        skipDigits(std::string const& chars = "");
    LLAPI void        skipLettersAndDigits(std::string const& chars = "");


    template <typename T>
    inline T readInteger() {
        T result = 0;
        while (isValid() && isdigit(read())) { result = result * 10 + (read() - '0'); }
        return result;
    }
};
