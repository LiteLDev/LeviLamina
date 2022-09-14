#pragma once

#include "../Global.h"
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <deque>
#include <map>
#include <stack>
#include <string>
#include <vector>

namespace Json {

class StaticString {
public:
    explicit StaticString(const char* czstring)
    : c_str_(czstring) {
    }
    operator const char*() const {
        return c_str_;
    }
    const char* c_str() const {
        return c_str_;
    }

private:
    const char* c_str_;
};

class ValueConstIterator;
class ValueIterator;
enum ValueType : char {
    nullValue = 0, ///< 'null' value
    intValue,      ///< signed integer value
    uintValue,     ///< unsigned integer value
    realValue,     ///< double value
    stringValue,   ///< UTF-8 string value
    booleanValue,  ///< bool value
    arrayValue,    ///< array value (ordered list)
    objectValue    ///< object value (collection of name/value pairs).
};

using UInt = unsigned;
using UInt64 = unsigned long long;
using Int = int;
using Int64 = long long;
using LargestInt = Int64;
using LargestUInt = UInt64;
using ArrayIndex = unsigned;

enum CommentPlacement {
    commentBefore = 0,      ///< a comment placed on the line before a value
    commentAfterOnSameLine, ///< a comment just after a value on the same line
    commentAfter,           ///< a comment on the line after a value (only make sense for
    /// root value)
    numberOfCommentPlacement
};

class Value {
    friend class ValueIteratorBase;

public:
    class CZString {
    public:
        enum DuplicationPolicy {
            noDuplication = 0,
            duplicate,
            duplicateOnCopy
        };
        inline CZString(ArrayIndex index)
        : cstr_(nullptr)
        , index_(index) {
        }
        CZString(char const* str, unsigned length, DuplicationPolicy allocate)
        : cstr_(str) {
            storage_.policy_ = allocate & 0x3;
            storage_.length_ = length & 0x3FFFFFFF;
        }
        MCAPI CZString(CZString const& other);
        MCAPI ~CZString();
        CZString& operator=(const CZString& other) {
            cstr_ = other.cstr_;
            index_ = other.index_;
            return *this;
        }
        bool operator<(CZString const& other) const {
            if (!cstr_)
                return index_ < other.index_;
            unsigned this_len = this->storage_.length_;
            unsigned other_len = other.storage_.length_;
            unsigned min_len = std::min<unsigned>(this_len, other_len);
            int comp = memcmp(this->cstr_, other.cstr_, min_len);
            if (comp < 0)
                return true;
            if (comp > 0)
                return false;
            return (this_len < other_len);
        }
        bool operator==(CZString const& other) const {
            if (!cstr_)
                return index_ == other.index_;
            unsigned this_len = this->storage_.length_;
            unsigned other_len = other.storage_.length_;
            if (this_len != other_len)
                return false;
            int comp = memcmp(this->cstr_, other.cstr_, this_len);
            return comp == 0;
        }
        ArrayIndex index() const {
            return index_;
        }
        const char* c_str() const {
            return cstr_;
        }
        bool isStaticString() const {
            return storage_.policy_ == noDuplication;
        }

    private:
        struct StringStorage {
            unsigned policy_ : 2;
            unsigned length_ : 30; // 1GB max
        };
        char const* cstr_;
        union {
            ArrayIndex index_;
            StringStorage storage_;
        };
    };

    using iterator = ValueIterator;
    using const_iterator = ValueConstIterator;
    using ObjectValues = std::map<CZString, Value>;

public:
    Value(ValueType type = nullValue) {
        bits_.value_type_ = type;
        switch (type) {
            case 6:
            case 7:
                value_.map_ = new ObjectValues;
                break;
            default:
                value_.string_ = nullptr;
        }
    }
    Value(Int value) {
        bits_.value_type_ = intValue;
        value_.int_ = value;
    }
    Value(UInt value) {
        bits_.value_type_ = uintValue;
        value_.uint_ = value;
    }
    Value(double value) {
        bits_.value_type_ = realValue;
        value_.real_ = value;
    }
    MCAPI Value(const char* value);
    Value(bool value) {
        bits_.value_type_ = booleanValue;
        value_.bool_ = value;
    }
    MCAPI Value(const Value& other);
    MCAPI ~Value();

    MCAPI static Value const null;

    MCAPI void swap(Value& other);
    ValueType type() const {
        return bits_.value_type_;
    }

    MCAPI Value& operator=(const Value& other);

    MCAPI bool operator<(const Value& other) const;
    MCAPI bool operator==(const Value& other) const;

    MCAPI std::string asString(std::string const&) const;
    MCAPI Int asInt(Int) const;
    MCAPI UInt asUInt(UInt) const;
    MCAPI float asFloat(float) const;
    MCAPI double asDouble(double) const;
    MCAPI bool asBool(bool) const;

    MCAPI bool isNull() const;
    bool isBool() const {
        return type() == booleanValue;
    }
    bool isInt() const {
        return type() == intValue;
    }
    bool isUInt() const {
        return type() == uintValue;
    }
    bool isIntegral() const {
        return type() == intValue || type() == uintValue;
    }
    bool isDouble() const {
        return type() == realValue;
    }
    MCAPI bool isNumeric() const;
    MCAPI bool isString() const;
    bool isArray() const {
        return type() == arrayValue;
    }
    bool isObject() const {
        return type() == objectValue;
    }
    MCAPI bool isConvertibleTo(ValueType other) const;

    MCAPI ArrayIndex size() const;
    MCAPI bool empty() const;
    void clear() {
        if (type() == arrayValue || type() == objectValue) {
            value_.map_->clear();
        }
    }
    MCAPI void resize(ArrayIndex newSize);
    MCAPI Value& operator[](ArrayIndex index);
    MCAPI Value& operator[](int index);
    MCAPI const Value& operator[](ArrayIndex index) const;
    MCAPI const Value& operator[](int index) const;
    MCAPI Value& append(const Value& value);

    MCAPI Value& operator[](const char* key);
    MCAPI const Value& operator[](const char* key) const;
    MCAPI Value& operator[](const std::string& key);
    MCAPI const Value& operator[](const std::string& key) const;
    MCAPI Value removeMember(const char* key);
    void removeMember(const std::string& key) {
        removeMember(key.c_str());
    }
    MCAPI bool isMember(const char* key) const;
    bool isMember(const std::string& key) const {
        return isMember(key.c_str());
    }

    MCAPI const_iterator begin() const;
    MCAPI const_iterator end() const;

    MCAPI iterator begin();
    MCAPI iterator end();

    MCAPI std::string toStyledString() const;

    union ValueHolder {
        LargestInt int_;
        LargestUInt uint_;
        double real_;
        bool bool_;
        char* string_; // actually ptr to unsigned, followed by str, unless
                       // !allocated_
        ObjectValues* map_;
    } value_;
    struct {
        ValueType value_type_ : 8;
        bool allocated_ : 1;
    } bits_;

private:
    MCAPI Value& resolveReference(const char* key, bool create);
};

class ValueIteratorBase {
public:
    typedef std::bidirectional_iterator_tag iterator_category;
    typedef unsigned int size_t;
    typedef int difference_type;
    typedef ValueIteratorBase SelfType;

    bool operator==(const SelfType& other) const {
        return isEqual(other);
    }
    bool operator!=(const SelfType& other) const {
        return !isEqual(other);
    }

    MCAPI Value key() const;

protected:
    MCAPI void increment(void);
    MCAPI class Json::Value& deref(void) const;

    bool isEqual(const SelfType& other) const {
        if (isNull_)
            return other.isNull_;
        return current_ == other.current_;
    }

private:
    Value::ObjectValues::iterator current_;
    bool isNull_;

public:
    ValueIteratorBase();
    explicit ValueIteratorBase(const Value::ObjectValues::iterator& current);
};
class ValueConstIterator : public ValueIteratorBase {
    friend class Value;

public:
    typedef const Value value_type;
    // typedef unsigned int size_t;
    // typedef int difference_type;
    typedef const Value& reference;
    typedef const Value* pointer;
    typedef ValueConstIterator SelfType;

    ValueConstIterator();
    ValueConstIterator(ValueIterator const& other);

private:
    explicit ValueConstIterator(const Value::ObjectValues::iterator& current);

public:
    MCAPI SelfType& operator++();
    MCAPI reference operator*() const;
};

class ValueIterator : public ValueIteratorBase {
    friend class Value;

public:
    typedef Value value_type;
    typedef unsigned int size_t;
    typedef int difference_type;
    typedef Value& reference;
    typedef Value* pointer;
    typedef ValueIterator SelfType;

    ValueIterator();
    explicit ValueIterator(const ValueConstIterator& other);
    ValueIterator(const ValueIterator& other);

private:
    explicit ValueIterator(const Value::ObjectValues::iterator& current);

public:
    SelfType& operator++() {
        increment();
        return *this;
    }

    Json::Value& operator*() {
        return deref();
    }
    // MCAPI reference operator*() const;
};

class Features {
public:
    static Features all();
    static Features strictMode();
    Features();
    bool strictRoot_;
    bool allowNumericKeys_;
};

class Reader {
public:
    typedef char Char;
    typedef const Char* Location;
    struct StructuredError {
        ptrdiff_t offset_start;
        ptrdiff_t offset_limit;
        std::string message;
    };
    MCAPI Reader();

    MCAPI bool parse(const std::string& document, Value& root, bool collectComments = true);
    MCAPI bool parse(const char* beginDoc, const char* endDoc, Value& root, bool collectComments = true);
    MCAPI bool parse(const char* beginDoc, unsigned long long length, Value& root, bool collectComments = true);
    MCAPI bool parse(std::istream& is, Value& root, bool collectComments = true);

    MCAPI std::string getFormattedErrorMessages() const;

private:
    enum TokenType {
        tokenEndOfStream = 0,
        tokenObjectBegin,
        tokenObjectEnd,
        tokenArrayBegin,
        tokenArrayEnd,
        tokenString,
        tokenNumber,
        tokenTrue,
        tokenFalse,
        tokenNull,
        tokenArraySeparator,
        tokenMemberSeparator,
        tokenComment,
        tokenError
    };

    class Token {
    public:
        TokenType type_;
        Location start_;
        Location end_;
    };

    class ErrorInfo {
    public:
        Token token_;
        std::string message_;
        Location extra_;
    };
    typedef std::deque<ErrorInfo> Errors;

    typedef std::stack<Value*> Nodes;
    Nodes nodes_;
    Errors errors_;
    std::string document_;
    Location begin_;
    Location end_;
    Location current_;
    Location lastValueEnd_;
    Value* lastValue_;
    std::string commentsBefore_;
    Features features_;
    bool collectComments_;
};

class Writer {
public:
    virtual ~Writer() {
    }
    virtual std::string write(const Value& root) = 0;
};

class FastWriter : public Writer {
public:
    FastWriter() {
    }
    ~FastWriter() override {
    }

public:
    MCAPI std::string write(const Value& root) override;

private:
    std::string document_;
    bool yamlCompatibilityEnabled_;
    bool dropNullPlaceholders_;
    bool omitEndingLineFeed_;
};

class StyledWriter : public Writer {
public:
    StyledWriter() {
    }
    ~StyledWriter() override {
    }

public:
    MCAPI std::string write(const Value& root) override;

private:
    typedef std::vector<std::string> ChildValues;

    ChildValues childValues_;
    std::string document_;
    std::string indentString_;
    unsigned int rightMargin_;
    unsigned int indentSize_;
    bool addChildValues_;
};

} // namespace Json