#include "llapi/utils/StringReader.h"

#include <stdexcept>

//////////////////////////////// CONSTRUCTOR ////////////////////////////////

StringReader::StringReader(const std::string& str)
: str(str), len(str.length()), begin(str.begin()), end(str.end()), it(begin) {}
StringReader::StringReader(const char* cstr)
: str(cstr), len(str.length()), begin(str.begin()), end(str.end()), it(begin) {}
StringReader::StringReader(const char* cstr, size_t len)
: str(cstr, len), len(len), begin(str.begin()), end(str.end()), it(begin) {}

StringReader::StringReader(const StringReader& other)                = default;
StringReader::StringReader(StringReader&& other) noexcept            = default;
StringReader& StringReader::operator=(const StringReader& other)     = default;
StringReader& StringReader::operator=(StringReader&& other) noexcept = default;

//////////////////////////////// GET ////////////////////////////////

bool StringReader::isEmpty() const { return len == 0; }

bool StringReader::isEnd() const { return it == end; }

bool StringReader::isStart() const { return it == begin; }

bool StringReader::isValid() const { return it != end; }

size_t StringReader::getPos() const { return it - begin; }

size_t StringReader::getLength() const { return len; }

size_t StringReader::getRemaining() const { return end - it; }

//////////////////////////////// READ ////////////////////////////////

char StringReader::read() {
    if (isEnd()) {
        throw std::out_of_range("StringReader::read: The end of the string has been reached");
    }
    return *it++;
}

char StringReader::read(char& c) { return c = read(); }

std::string StringReader::read(size_t len) {
    if (len > getRemaining()) {
        throw std::out_of_range("StringReader::read: The end of the string has been reached");
    }
    std::string result(it, it + len);
    it += len;
    return result;
}

std::string StringReader::readUntil(char c) {
    std::string result;
    while (!isEnd() && peek() != c) {
        result += read();
    }
    return result;
}

std::string StringReader::readUntil(const std::string& chars) {
    std::string result;
    while (!isEnd() && chars.find(peek()) == std::string::npos) {
        result += read();
    }
    return result;
}

std::string StringReader::readUntilNot(char c) {
    std::string result;
    while (!isEnd() && peek() != c) {
        result += read();
    }
    return result;
}

std::string StringReader::readUntilNot(const std::string& chars) {
    std::string result;
    while (!isEnd() && chars.find(peek()) != std::string::npos) {
        result += read();
    }
    return result;
}

std::string StringReader::readLine() { return readUntil('\n'); }

std::string StringReader::readLetters(const std::string& chars) {
    std::string result;
    while (!isEnd() && (isalpha(peek()) || chars.find(peek()) != std::string::npos)) {
        result += read();
    }
    return result;
}

std::string StringReader::readLower(const std::string& chars) {
    std::string result;
    while (!isEnd() && (islower(peek()) || chars.find(peek()) != std::string::npos)) {
        result += read();
    }
    return result;
}

std::string StringReader::readUpper(const std::string& chars) {
    std::string result;
    while (!isEnd() && (isupper(peek()) || chars.find(peek()) != std::string::npos)) {
        result += read();
    }
    return result;
}

std::string StringReader::readDigits(const std::string& chars) {
    std::string result;
    while (!isEnd() && (isdigit(peek()) || chars.find(peek()) != std::string::npos)) {
        result += read();
    }
    return result;
}

std::string StringReader::readLettersAndDigits(const std::string& chars) {
    std::string result;
    while (!isEnd() && (isalnum(peek()) || chars.find(peek()) != std::string::npos)) {
        result += read();
    }
    return result;
}

std::string StringReader::readVariableName() {
    std::string result;
    bool        first = true;
    while (!isEnd() && (isalnum(peek()) || peek() == '_')) {
        if (first && isdigit(peek())) {
            return result;
        }
        result += read();
    }
    return result;
}

std::string StringReader::readToEnd() {
    std::string result;
    while (isValid()) {
        result += read();
    }
    return result;
}

//////////////////////////////// PEEK ////////////////////////////////

char StringReader::peek() {
    if (isEnd()) {
        throw std::out_of_range("StringReader::peek: The end of the string has been reached");
    }
    return *it;
}

char StringReader::peek(char& c) { return c = peek(); }

char StringReader::peek(size_t offset) {
    if (isEnd()) {
        throw std::out_of_range("StringReader::peek: The end of the string has been reached");
    }
    if (offset >= getRemaining()) {
        throw std::out_of_range("StringReader::peek: The offset is greater than the remaining length");
    }
    return *(it + offset);
}

std::string StringReader::peek(size_t offset, size_t len) {
    if (offset >= getRemaining()) {
        throw std::out_of_range("StringReader::peek: The offset is greater than the remaining length");
    }
    return std::string(it + offset, it + offset + len);
}

//////////////////////////////// SKIP ////////////////////////////////

void StringReader::skip() {
    if (isEnd()) {
        throw std::out_of_range("StringReader::skip: The end of the string has been reached");
    }
    ++it;
}

void StringReader::skip(size_t len) {
    if (isEnd()) {
        throw std::out_of_range("StringReader::skip: The end of the string has been reached");
    }
    if (len > getRemaining()) {
        throw std::out_of_range("StringReader::skip: The length is greater than the remaining length");
    }
    it += len;
}

void StringReader::skipUntil(char c) {
    while (isValid() && peek() != c) {
        skip();
    }
}

void StringReader::skipUntil(const std::string& chars) {
    while (isValid() && chars.find(peek()) == std::string::npos) {
        skip();
    }
}

void StringReader::skipUntilNot(char c) {
    while (isValid() && peek() == c) {
        skip();
    }
}

void StringReader::skipUntilNot(const std::string& chars) {
    while (isValid() && chars.find(peek()) != std::string::npos) {
        skip();
    }
}

void StringReader::skipLetters(const std::string& chars) {
    while (isValid() && (isalpha(peek()) || chars.find(peek()) != std::string::npos)) {
        skip();
    }
}

void StringReader::skipLower(const std::string& chars) {
    while (isValid() && (islower(peek()) || chars.find(peek()) != std::string::npos)) {
        skip();
    }
}

void StringReader::skipUpper(const std::string& chars) {
    while (isValid() && (isupper(peek()) || chars.find(peek()) != std::string::npos)) {
        skip();
    }
}

void StringReader::skipDigits(const std::string& chars) {
    while (isValid() && (isdigit(peek()) || chars.find(peek()) != std::string::npos)) {
        skip();
    }
}

void StringReader::skipLettersAndDigits(const std::string& chars) {
    while (isValid() && (isalnum(peek()) || chars.find(peek()) != std::string::npos)) {
        skip();
    }
}

void StringReader::skipWhitespace() { skipUntilNot(" \t\r\n"); }

void StringReader::skipLine() { skipUntil('\n'); }
