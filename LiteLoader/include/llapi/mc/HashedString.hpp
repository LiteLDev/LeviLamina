/**
 * @file  HashedString.hpp
 *
 */
#pragma once

#include "llapi/Global.h"
#include <string>
#include <string_view>

/**
 * @brief A class representing a hashed string with its corresponding hash value.
 * The HashedString class provides a wrapper around a std::string that also stores
 * its corresponding hash value. This is useful for efficient comparison between
 * strings in scenarios such as hash table lookups.
 *
 */
class HashedString {

public:
    uint64_t hash;
    std::string str;
    class HashedString* lastMatch;

    constexpr static unsigned long long computeHash(std::string_view str){
        unsigned long long hash = 0xCBF29CE484222325ULL;
        for(char s : str){
            hash = s ^ (0x100000001B3ULL * hash);
        }
        return hash;
    }
    
    // Constructors
    constexpr HashedString(std::nullptr_t = nullptr) noexcept : hash(0), lastMatch(nullptr) {}
    
    constexpr HashedString(uint64_t h, const char* str) noexcept : hash(h), str(str), lastMatch(nullptr) {}
    
    constexpr HashedString(const char* str) noexcept : hash(computeHash(str)), str(str), lastMatch(nullptr) {}
    
    constexpr HashedString(const std::string& str) noexcept : hash(computeHash(str)), str(str), lastMatch(nullptr) {}
    
    constexpr HashedString(const HashedString& other) noexcept : hash(other.hash), str(other.str), lastMatch(nullptr) {}
    
    constexpr HashedString(HashedString&& other) noexcept : hash(other.hash), str(std::move(other.str)), lastMatch(other.lastMatch) {
        other.hash = 0;
        other.lastMatch = nullptr;
    }
    
    inline HashedString& operator=(const HashedString& other) noexcept {
        hash = other.hash;
        str = other.str;
        lastMatch = nullptr;
        return *this;
    }
    inline HashedString& operator=(HashedString&& other) noexcept {
        hash = other.hash;
        str = std::move(other.str);
        lastMatch = other.lastMatch;
        other.hash = 0;
        other.lastMatch = nullptr;
        return *this;
    }
    
    // Accessors
    constexpr const char* c_str() const noexcept {
        return str.c_str();
    }
    constexpr const std::string& getString() const noexcept {
        return str;
    }
    constexpr uint64_t getHash() const noexcept { 
        return hash;
    }
    constexpr bool isEmpty() const noexcept { 
        return str.empty(); 
    }

    // Mutators
    inline void clear() noexcept { hash = 0; str.clear(); lastMatch = nullptr; }
    
    // Operators
    template<typename StringType>
    constexpr bool operator==(StringType const& rhs) const noexcept {
        return str == rhs;
    }
    constexpr bool operator==(const HashedString& other) const noexcept { 
        return hash == other.hash;
    }

    template<typename StringType>
    constexpr bool operator!=(StringType const& rhs) const noexcept {
        return str != rhs;
    }
    constexpr bool operator!=(const HashedString& other) const noexcept { 
        return hash != other.hash;
    }

    template<typename StringType>
    constexpr std::strong_ordering operator<(const StringType& other) const noexcept {
        return str <=> other.str;
    }
    constexpr std::strong_ordering operator<=>(const HashedString& other) const noexcept {
        return str <=> other.str;
    }

    //Convertors
    inline constexpr operator std::string() const {
        return str;
    }
    inline constexpr operator std::string_view() const {
        return std::string_view(str);
    }
    /**
     * @symbol  ??BHashedString\@\@QEBA?AV?$basic_string_span\@$$CBD$0?0\@gsl\@\@XZ
     */
    MCAPI operator class gsl::basic_string_span<char const, -1>() const;
    /**
     * @symbol  ?bindType\@HashedString\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?defaultErrorValue\@HashedString\@\@2V1\@A
     */
    MCAPI static class HashedString defaultErrorValue;
    /**
     * @symbol  ?getEmptyString\@HashedString\@\@SAAEBV1\@XZ
     */
    MCAPI static class HashedString const & getEmptyString();

};

namespace std {

    template <>
    struct hash<HashedString> {
        std::size_t operator()(HashedString const& str) const noexcept { return str.getHash(); }
    };

}  // namespace std