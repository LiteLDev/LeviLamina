#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/ValueType.h"

// auto generated inclusion list
#include "mc/deps/json/ValueType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class ValueConstIterator; }
namespace Json { class ValueIterator; }
// clang-format on

namespace Json {

class Value {
public:
    // Value inner types declare
    // clang-format off
    class CZString;
    struct CZStringCompare;
    // clang-format on

    friend class ValueIteratorBase;


    using Int         = int;
    using UInt        = uint;
    using Int64       = int64;
    using UInt64      = uint64;
    using LargestInt  = Int64;
    using LargestUInt = UInt64;
    using ArrayIndex  = uint;

    using iterator       = ValueIterator;
    using const_iterator = ValueConstIterator;
    using ObjectValues   = std::map<CZString, Value>;

    // Value inner types define
    class CZString {
    public:
        enum class DuplicationPolicy : uint {
            noDuplication   = 0,
            duplicate       = 1,
            duplicateOnCopy = 2,
            Mask            = 3,
        };
        struct StringStorage {
            DuplicationPolicy policy_ : 2;
            uint              length_ : 30; // 1GB max
        };

        char const* cstr_;
        union {
            ArrayIndex    index_{};
            StringStorage storage_;
        };

        CZString(ArrayIndex index) : index_(index) {}

        CZString(char const* str, uint length, DuplicationPolicy allocate) : cstr_(str) {
            storage_.policy_ = allocate;
            storage_.length_ = length & 0x3FFFFFFF;
        }
        constexpr CZString& operator=(CZString const& other) {
            if (this == &other) {
                return *this;
            }
            cstr_  = other.cstr_;
            index_ = other.index_;
            return *this;
        }

        [[nodiscard]] constexpr std::strong_ordering operator<=>(CZString const& other) const {
            if (!cstr_) return index_ <=> other.index_;
            uint this_len  = this->storage_.length_;
            uint other_len = other.storage_.length_;
            uint min_len   = std::min<uint>(this_len, other_len);
            int  comp      = memcmp(this->cstr_, other.cstr_, min_len);

            if (comp == 0) return this_len <=> other_len;
            return comp <=> 0;
        }

        [[nodiscard]] constexpr ArrayIndex  index() const { return index_; }
        [[nodiscard]] constexpr char const* c_str() const { return cstr_; }
        [[nodiscard]] constexpr bool        isStaticString() const {
            return storage_.policy_ == DuplicationPolicy::noDuplication;
        }

    public:
        // NOLINTBEGIN
        MCAPI CZString();

        MCAPI CZString(char const* cstr);

        MCAPI CZString(class Json::Value::CZString&& other);

        MCAPI CZString(class Json::Value::CZString const& other);

        MCAPI CZString(char* cstr, bool duplicate);

        MCAPI ~CZString();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

    struct CZStringCompare {
    public:
        // prevent constructor by default
        CZStringCompare& operator=(CZStringCompare const&);
        CZStringCompare(CZStringCompare const&);
        CZStringCompare();

    public:
        // NOLINTBEGIN
        MCAPI bool
        operator()(class Json::Value::CZString const& czstring1, class Json::Value::CZString const& czstring2) const;

        // NOLINTEND
    };

    union ValueHolder {
        int64                      int_;    // this+0x0
        uint64                     uint_;   // this+0x0
        double                     real_;   // this+0x0
        bool                       bool_;   // this+0x0
        char*                      string_; // this+0x0
        std::map<CZString, Value>* map_;    // this+0x0
    };

    ValueHolder value_;
    struct {
        ValueType value_type_ : 8;
        bool      allocated_  : 1;
    } bits_;

public:
    // NOLINTBEGIN
    MCAPI Value(int64 value);

    MCAPI Value(bool value);

    MCAPI Value(char const* value);

    MCAPI Value(class Json::Value&& other);

    MCAPI Value(class Json::Value const& other);

    MCAPI Value(class Json::Value::CZString* str);

    MCAPI Value(std::string const& value);

    MCAPI Value(double value);

    MCAPI Value(::Json::ValueType type = ::Json::ValueType::Null);

    MCAPI Value(int value);

    MCAPI Value(uint64 value);

    MCAPI Value(uint value);

    MCAPI class Json::Value& append(class Json::Value&& value);

    MCAPI class Json::Value& append(class Json::Value const& value);

    MCAPI bool asBool(bool defaultValue) const;

    MCAPI char const* asCString() const;

    MCAPI double asDouble(double defaultValue) const;

    MCAPI float asFloat(float defaultValue) const;

    MCAPI int asInt(int defaultValue) const;

    MCAPI int64 asInt64(int64 defaultValue) const;

    MCAPI int64 asLargestInt() const;

    MCAPI uint64 asLargestUInt() const;

    MCAPI std::string asString(std::string const&) const;

    MCAPI uint asUInt(uint defaultValue) const;

    MCAPI uint64 asUInt64(uint64 defaultValue) const;

    MCAPI class Json::ValueConstIterator begin() const;

    MCAPI class Json::ValueIterator begin();

    MCAPI void clear();

    MCAPI int compare(class Json::Value const& other) const;

    MCAPI bool empty() const;

    MCAPI class Json::ValueConstIterator end() const;

    MCAPI class Json::ValueIterator end();

    MCAPI class Json::Value get(char const* key, class Json::Value const& defaultValue) const;

    MCAPI class Json::Value get(std::string const& key, class Json::Value const& defaultValue) const;

    MCAPI std::vector<std::string> getMemberNames() const;

    MCAPI bool isArray() const;

    MCAPI bool isBool() const;

    MCAPI bool isConvertibleTo(::Json::ValueType other) const;

    MCAPI bool isDouble() const;

    MCAPI bool isInt() const;

    MCAPI bool isIntegral() const;

    MCAPI bool isMember(char const* key) const;

    MCAPI bool isMember(std::string const& key) const;

    MCAPI bool isNull() const;

    MCAPI bool isNumeric() const;

    MCAPI bool isObject() const;

    MCAPI bool isString() const;

    MCAPI bool operator!=(class Json::Value const& other) const;

    MCAPI bool operator<(class Json::Value const& other) const;

    MCAPI class Json::Value& operator=(class Json::Value&& other);

    MCAPI class Json::Value& operator=(class Json::Value const& other);

    MCAPI bool operator==(class Json::Value const& other) const;

    MCAPI class Json::Value& operator[](char const* key);

    MCAPI class Json::Value& operator[](std::string const& key);

    MCAPI class Json::Value& operator[](int index);

    MCAPI class Json::Value& operator[](uint index);

    MCAPI class Json::Value const& operator[](char const* key) const;

    MCAPI class Json::Value const& operator[](std::string const& key) const;

    MCAPI class Json::Value const& operator[](int index) const;

    MCAPI class Json::Value const& operator[](uint index) const;

    MCAPI class Json::Value removeMember(char const* key);

    MCAPI class Json::Value removeMember(std::string const& key);

    MCAPI void resize(uint newSize);

    MCAPI uint size() const;

    MCAPI std::string toStyledString() const;

    MCAPI ::Json::ValueType type() const;

    MCAPI ~Value();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _insert(class Json::Value::CZString&& key, class Json::Value&& value, bool overwrite);

    MCAPI class Json::Value& _resolveReference(char const* key);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static int const& maxInt();

    MCAPI static int64 const& maxInt64();

    MCAPI static int64 const& maxLargestInt();

    MCAPI static uint64 const& maxLargestUInt();

    MCAPI static uint const& maxUInt();

    MCAPI static uint64 const& maxUInt64();

    MCAPI static int const& minInt();

    MCAPI static int64 const& minInt64();

    MCAPI static int64 const& minLargestInt();

    MCAPI static class Json::Value const& null();

    // NOLINTEND
};

}; // namespace Json
