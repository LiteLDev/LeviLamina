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
        // symbol: ??0CZString@Value@Json@@QEAA@XZ
        MCAPI CZString();

        // symbol: ??0CZString@Value@Json@@QEAA@PEBD@Z
        MCAPI CZString(char const*);

        // symbol: ??0CZString@Value@Json@@QEAA@$$QEAV012@@Z
        MCAPI CZString(class Json::Value::CZString&& other);

        // symbol: ??0CZString@Value@Json@@QEAA@AEBV012@@Z
        MCAPI CZString(class Json::Value::CZString const& other);

        // symbol: ??0CZString@Value@Json@@QEAA@PEAD_N@Z
        MCAPI CZString(char*, bool);

        // symbol: ?c_str@CZString@Value@Json@@QEBAPEBDXZ
        // MCAPI char const* c_str() const;

        // symbol: ??1CZString@Value@Json@@QEAA@XZ
        MCAPI ~CZString();

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
        // symbol: ??RCZStringCompare@Value@Json@@QEBA_NAEBVCZString@12@0@Z
        MCAPI bool operator()(class Json::Value::CZString const&, class Json::Value::CZString const&) const;

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
    // symbol: ??0Value@Json@@QEAA@_J@Z
    MCAPI Value(int64 value);

    // symbol: ??0Value@Json@@QEAA@_N@Z
    MCAPI Value(bool value);

    // symbol: ??0Value@Json@@QEAA@PEBD@Z
    MCAPI Value(char const* value);

    // symbol: ??0Value@Json@@QEAA@$$QEAV01@@Z
    MCAPI Value(class Json::Value&&);

    // symbol: ??0Value@Json@@QEAA@AEBV01@@Z
    MCAPI Value(class Json::Value const& other);

    // symbol: ??0Value@Json@@QEAA@PEAVCZString@01@@Z
    MCAPI Value(class Json::Value::CZString*);

    // symbol: ??0Value@Json@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI Value(std::string const& value);

    // symbol: ??0Value@Json@@QEAA@N@Z
    MCAPI Value(double value);

    // symbol: ??0Value@Json@@QEAA@W4ValueType@1@@Z
    MCAPI Value(::Json::ValueType type = ::Json::ValueType::Null);

    // symbol: ??0Value@Json@@QEAA@H@Z
    MCAPI Value(int value);

    // symbol: ??0Value@Json@@QEAA@_K@Z
    MCAPI Value(uint64 value);

    // symbol: ??0Value@Json@@QEAA@I@Z
    MCAPI Value(uint value);

    // symbol: ?append@Value@Json@@QEAAAEAV12@$$QEAV12@@Z
    MCAPI class Json::Value& append(class Json::Value&&);

    // symbol: ?append@Value@Json@@QEAAAEAV12@AEBV12@@Z
    MCAPI class Json::Value& append(class Json::Value const& value);

    // symbol: ?asBool@Value@Json@@QEBA_N_N@Z
    MCAPI bool asBool(bool defaultValue) const;

    // symbol: ?asCString@Value@Json@@QEBAPEBDXZ
    MCAPI char const* asCString() const;

    // symbol: ?asDouble@Value@Json@@QEBANN@Z
    MCAPI double asDouble(double defaultValue) const;

    // symbol: ?asFloat@Value@Json@@QEBAMM@Z
    MCAPI float asFloat(float defaultValue) const;

    // symbol: ?asInt@Value@Json@@QEBAHH@Z
    MCAPI int asInt(int defaultValue) const;

    // symbol: ?asInt64@Value@Json@@QEBA_J_J@Z
    MCAPI int64 asInt64(int64 defaultValue) const;

    // symbol: ?asLargestInt@Value@Json@@QEBA_JXZ
    MCAPI int64 asLargestInt() const;

    // symbol: ?asLargestUInt@Value@Json@@QEBA_KXZ
    MCAPI uint64 asLargestUInt() const;

    // symbol: ?asString@Value@Json@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
    MCAPI std::string asString(std::string const& defaultValue) const;

    // symbol: ?asUInt@Value@Json@@QEBAII@Z
    MCAPI uint asUInt(uint defaultValue) const;

    // symbol: ?asUInt64@Value@Json@@QEBA_K_K@Z
    MCAPI uint64 asUInt64(uint64 defaultValue) const;

    // symbol: ?begin@Value@Json@@QEBA?AVValueConstIterator@2@XZ
    MCAPI class Json::ValueConstIterator begin() const;

    // symbol: ?begin@Value@Json@@QEAA?AVValueIterator@2@XZ
    MCAPI class Json::ValueIterator begin();

    // symbol: ?clear@Value@Json@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?compare@Value@Json@@QEBAHAEBV12@@Z
    MCAPI int compare(class Json::Value const& other) const;

    // symbol: ?empty@Value@Json@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ?end@Value@Json@@QEBA?AVValueConstIterator@2@XZ
    MCAPI class Json::ValueConstIterator end() const;

    // symbol: ?end@Value@Json@@QEAA?AVValueIterator@2@XZ
    MCAPI class Json::ValueIterator end();

    // symbol: ?get@Value@Json@@QEBA?AV12@PEBDAEBV12@@Z
    MCAPI class Json::Value get(char const* key, class Json::Value const& defaultValue) const;

    // symbol: ?get@Value@Json@@QEBA?AV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV12@@Z
    MCAPI class Json::Value get(std::string const& key, class Json::Value const& defaultValue) const;

    // symbol:
    // ?getMemberNames@Value@Json@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getMemberNames() const;

    // symbol: ?isArray@Value@Json@@QEBA_NXZ
    MCAPI bool isArray() const;

    // symbol: ?isBool@Value@Json@@QEBA_NXZ
    MCAPI bool isBool() const;

    // symbol: ?isConvertibleTo@Value@Json@@QEBA_NW4ValueType@2@@Z
    MCAPI bool isConvertibleTo(::Json::ValueType other) const;

    // symbol: ?isDouble@Value@Json@@QEBA_NXZ
    MCAPI bool isDouble() const;

    // symbol: ?isInt@Value@Json@@QEBA_NXZ
    MCAPI bool isInt() const;

    // symbol: ?isIntegral@Value@Json@@QEBA_NXZ
    MCAPI bool isIntegral() const;

    // symbol: ?isMember@Value@Json@@QEBA_NPEBD@Z
    MCAPI bool isMember(char const* key) const;

    // symbol: ?isMember@Value@Json@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isMember(std::string const& key) const;

    // symbol: ?isNull@Value@Json@@QEBA_NXZ
    MCAPI bool isNull() const;

    // symbol: ?isNumeric@Value@Json@@QEBA_NXZ
    MCAPI bool isNumeric() const;

    // symbol: ?isObject@Value@Json@@QEBA_NXZ
    MCAPI bool isObject() const;

    // symbol: ?isString@Value@Json@@QEBA_NXZ
    MCAPI bool isString() const;

    // symbol: ??9Value@Json@@QEBA_NAEBV01@@Z
    MCAPI bool operator!=(class Json::Value const& other) const;

    // symbol: ??MValue@Json@@QEBA_NAEBV01@@Z
    MCAPI bool operator<(class Json::Value const& other) const;

    // symbol: ??4Value@Json@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Json::Value& operator=(class Json::Value&&);

    // symbol: ??4Value@Json@@QEAAAEAV01@AEBV01@@Z
    MCAPI class Json::Value& operator=(class Json::Value const& other);

    // symbol: ??8Value@Json@@QEBA_NAEBV01@@Z
    MCAPI bool operator==(class Json::Value const& other) const;

    // symbol: ??AValue@Json@@QEAAAEAV01@PEBD@Z
    MCAPI class Json::Value& operator[](char const* key);

    // symbol: ??AValue@Json@@QEAAAEAV01@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Json::Value& operator[](std::string const& key);

    // symbol: ??AValue@Json@@QEAAAEAV01@H@Z
    MCAPI class Json::Value& operator[](int index);

    // symbol: ??AValue@Json@@QEAAAEAV01@I@Z
    MCAPI class Json::Value& operator[](uint index);

    // symbol: ??AValue@Json@@QEBAAEBV01@PEBD@Z
    MCAPI class Json::Value const& operator[](char const* key) const;

    // symbol: ??AValue@Json@@QEBAAEBV01@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Json::Value const& operator[](std::string const& key) const;

    // symbol: ??AValue@Json@@QEBAAEBV01@H@Z
    MCAPI class Json::Value const& operator[](int index) const;

    // symbol: ??AValue@Json@@QEBAAEBV01@I@Z
    MCAPI class Json::Value const& operator[](uint index) const;

    // symbol: ?removeMember@Value@Json@@QEAA?AV12@PEBD@Z
    MCAPI class Json::Value removeMember(char const* key);

    // symbol: ?removeMember@Value@Json@@QEAA?AV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Json::Value removeMember(std::string const& key);

    // symbol: ?resize@Value@Json@@QEAAXI@Z
    MCAPI void resize(uint newSize);

    // symbol: ?size@Value@Json@@QEBAIXZ
    MCAPI uint size() const;

    // symbol: ?toStyledString@Value@Json@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toStyledString() const;

    // symbol: ?type@Value@Json@@QEBA?AW4ValueType@2@XZ
    MCAPI ::Json::ValueType type() const;

    // symbol: ??1Value@Json@@QEAA@XZ
    MCAPI ~Value();

    // symbol: ?maxInt@Value@Json@@2HB
    MCAPI static int const maxInt;

    // symbol: ?maxInt64@Value@Json@@2_JB
    MCAPI static int64 const maxInt64;

    // symbol: ?maxLargestInt@Value@Json@@2_JB
    MCAPI static int64 const maxLargestInt;

    // symbol: ?maxLargestUInt@Value@Json@@2_KB
    MCAPI static uint64 const maxLargestUInt;

    // symbol: ?maxUInt@Value@Json@@2IB
    MCAPI static uint const maxUInt;

    // symbol: ?maxUInt64@Value@Json@@2_KB
    MCAPI static uint64 const maxUInt64;

    // symbol: ?minInt@Value@Json@@2HB
    MCAPI static int const minInt;

    // symbol: ?minInt64@Value@Json@@2_JB
    MCAPI static int64 const minInt64;

    // symbol: ?minLargestInt@Value@Json@@2_JB
    MCAPI static int64 const minLargestInt;

    // symbol: ?null@Value@Json@@2V12@B
    MCAPI static class Json::Value const null;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_insert@Value@Json@@AEAAX$$QEAVCZString@12@$$QEAV12@_N@Z
    MCAPI void _insert(class Json::Value::CZString&&, class Json::Value&&, bool);

    // symbol: ?_resolveReference@Value@Json@@AEAAAEAV12@PEBD@Z
    MCAPI class Json::Value& _resolveReference(char const*);

    // NOLINTEND
};

}; // namespace Json
