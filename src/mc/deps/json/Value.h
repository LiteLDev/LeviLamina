#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/ValueType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class ValueConstIterator; }
namespace Json { class ValueIterator; }
namespace Json { enum class CommentPlacement; }
namespace Json { enum class ValueType; }
// clang-format on

namespace Json {

class Value {
public:
    // Value inner types declare
    // clang-format off
    class CZString;
    // clang-format on

    friend class ValueIteratorBase;


    using Int         = int32_t;
    using UInt        = uint32_t;
    using Int64       = int64_t;
    using UInt64      = uint64_t;
    using LargestInt  = Int64;
    using LargestUInt = UInt64;
    using ArrayIndex  = unsigned;

    using iterator       = ValueIterator;
    using const_iterator = ValueConstIterator;
    using ObjectValues   = std::map<CZString, Value>;

    // Value inner types define
    class CZString {

    public:
        enum class DuplicationPolicy : unsigned {
            noDuplication   = 0,
            duplicate       = 1,
            duplicateOnCopy = 2,
            Mask            = 3,
        };
        struct StringStorage {
            DuplicationPolicy policy_ : 2;
            unsigned          length_ : 30; // 1GB max
        };

        char const* cstr_;
        union {
            ArrayIndex    index_{};
            StringStorage storage_;
        };

        CZString(char const* str, unsigned length, DuplicationPolicy allocate) : cstr_(str) {
            storage_.policy_ = allocate;
            storage_.length_ = length & 0x3FFFFFFF;
        }
        inline CZString& operator=(const CZString& other) {
            if (this == &other) {
                return *this;
            }
            cstr_  = other.cstr_;
            index_ = other.index_;
            return *this;
        }

        [[nodiscard]] constexpr std::strong_ordering operator<=>(CZString const& other) const {
            if (!cstr_)
                return index_ <=> other.index_;
            unsigned this_len  = this->storage_.length_;
            unsigned other_len = other.storage_.length_;
            unsigned min_len   = std::min<unsigned>(this_len, other_len);
            int      comp      = memcmp(this->cstr_, other.cstr_, min_len);

            if (comp == 0)
                return this_len <=> other_len;
            return comp <=> 0;
        }

        [[nodiscard]] constexpr ArrayIndex  index() const { return index_; }
        [[nodiscard]] constexpr const char* c_str() const { return cstr_; }
        [[nodiscard]] constexpr bool        isStaticString() const {
            return storage_.policy_ == DuplicationPolicy::noDuplication;
        }

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0CZString\@Value\@Json\@\@QEAA\@AEBV012\@\@Z
         */
        MCAPI CZString(class Json::Value::CZString const&);
        /**
         * @symbol ??1CZString\@Value\@Json\@\@QEAA\@XZ
         */
        MCAPI ~CZString();
        // NOLINTEND
    };

    union ValueHolder {
        int64_t                    int_;    // this+0x0
        uint64_t                   uint_;   // this+0x0
        double                     real_;   // this+0x0
        bool                       bool_;   // this+0x0
        char*                      string_; // this+0x0
        std::map<CZString, Value>* map_;    // this+0x0
    };

    ValueHolder value_;
    struct {
        ValueType value_type_ : 8;
        bool      allocated_ : 1;
    } bits_;

public:
    // prevent constructor by default
    Value() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@I\@Z
     */
    MCAPI Value(unsigned int);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@N\@Z
     */
    MCAPI Value(double);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@_K\@Z
     */
    MCAPI Value(uint64_t);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@_J\@Z
     */
    MCAPI Value(int64_t);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Value(std::string const&);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI Value(class Json::Value const&);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@PEBD\@Z
     */
    MCAPI Value(char const*);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@W4ValueType\@1\@\@Z
     */
    MCAPI Value(enum class Json::ValueType);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@_N\@Z
     */
    MCAPI Value(bool);
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@H\@Z
     */
    MCAPI Value(int);
    /**
     * @symbol ?append\@Value\@Json\@\@QEAAAEAV12\@AEBV12\@\@Z
     */
    MCAPI class Json::Value& append(class Json::Value const&);
    /**
     * @symbol ?asBool\@Value\@Json\@\@QEBA_N_N\@Z
     */
    MCAPI bool asBool(bool) const;
    /**
     * @symbol ?asCString\@Value\@Json\@\@QEBAPEBDXZ
     */
    MCAPI char const* asCString() const;
    /**
     * @symbol ?asDouble\@Value\@Json\@\@QEBANN\@Z
     */
    MCAPI double asDouble(double) const;
    /**
     * @symbol ?asFloat\@Value\@Json\@\@QEBAMM\@Z
     */
    MCAPI float asFloat(float) const;
    /**
     * @symbol ?asInt\@Value\@Json\@\@QEBAHH\@Z
     */
    MCAPI int asInt(int) const;
    /**
     * @symbol ?asInt64\@Value\@Json\@\@QEBA_J_J\@Z
     */
    MCAPI int64_t asInt64(int64_t) const;
    /**
     * @symbol ?asLargestInt\@Value\@Json\@\@QEBA_JXZ
     */
    MCAPI int64_t asLargestInt() const;
    /**
     * @symbol ?asLargestUInt\@Value\@Json\@\@QEBA_KXZ
     */
    MCAPI uint64_t asLargestUInt() const;
    /**
     * @symbol
     * ?asString\@Value\@Json\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI std::string asString(std::string const&) const;
    /**
     * @symbol ?asUInt\@Value\@Json\@\@QEBAII\@Z
     */
    MCAPI unsigned int asUInt(unsigned int) const;
    /**
     * @symbol ?asUInt64\@Value\@Json\@\@QEBA_K_K\@Z
     */
    MCAPI uint64_t asUInt64(uint64_t) const;
    /**
     * @symbol ?begin\@Value\@Json\@\@QEAA?AVValueIterator\@2\@XZ
     */
    MCAPI class Json::ValueIterator begin();
    /**
     * @symbol ?begin\@Value\@Json\@\@QEBA?AVValueConstIterator\@2\@XZ
     */
    MCAPI class Json::ValueConstIterator begin() const;
    /**
     * @symbol ?clear\@Value\@Json\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol ?compare\@Value\@Json\@\@QEBAHAEBV12\@\@Z
     */
    MCAPI int compare(class Json::Value const&) const;
    /**
     * @symbol ?empty\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol ?end\@Value\@Json\@\@QEAA?AVValueIterator\@2\@XZ
     */
    MCAPI class Json::ValueIterator end();
    /**
     * @symbol ?end\@Value\@Json\@\@QEBA?AVValueConstIterator\@2\@XZ
     */
    MCAPI class Json::ValueConstIterator end() const;
    /**
     * @symbol
     * ?get\@Value\@Json\@\@QEBA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV12\@\@Z
     */
    MCAPI class Json::Value get(std::string const&, class Json::Value const&) const;
    /**
     * @symbol ?get\@Value\@Json\@\@QEBA?AV12\@PEBDAEBV12\@\@Z
     */
    MCAPI class Json::Value get(char const*, class Json::Value const&) const;
    /**
     * @symbol
     * ?getComment\@Value\@Json\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CommentPlacement\@2\@\@Z
     */
    MCAPI std::string getComment(enum class Json::CommentPlacement) const;
    /**
     * @symbol
     * ?getMemberNames\@Value\@Json\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getMemberNames() const;
    /**
     * @symbol ?hasComment\@Value\@Json\@\@QEBA_NW4CommentPlacement\@2\@\@Z
     */
    MCAPI bool hasComment(enum class Json::CommentPlacement) const;
    /**
     * @symbol ?isArray\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isArray() const;
    /**
     * @symbol ?isBool\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isBool() const;
    /**
     * @symbol ?isConvertibleTo\@Value\@Json\@\@QEBA_NW4ValueType\@2\@\@Z
     */
    MCAPI bool isConvertibleTo(enum class Json::ValueType) const;
    /**
     * @symbol ?isDouble\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isDouble() const;
    /**
     * @symbol ?isInt\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isInt() const;
    /**
     * @symbol ?isIntegral\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isIntegral() const;
    /**
     * @symbol
     * ?isMember\@Value\@Json\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isMember(std::string const&) const;
    /**
     * @symbol ?isMember\@Value\@Json\@\@QEBA_NPEBD\@Z
     */
    MCAPI bool isMember(char const*) const;
    /**
     * @symbol ?isNull\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @symbol ?isNumeric\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isNumeric() const;
    /**
     * @symbol ?isObject\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isObject() const;
    /**
     * @symbol ?isString\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isString() const;
    /**
     * @symbol ??9Value\@Json\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator!=(class Json::Value const&) const;
    /**
     * @symbol ??MValue\@Json\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator<(class Json::Value const&) const;
    /**
     * @symbol ??4Value\@Json\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class Json::Value& operator=(class Json::Value const&);
    /**
     * @symbol ??8Value\@Json\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class Json::Value const&) const;
    /**
     * @symbol ??AValue\@Json\@\@QEAAAEAV01\@PEBD\@Z
     */
    MCAPI class Json::Value& operator[](char const*);
    /**
     * @symbol ??AValue\@Json\@\@QEAAAEAV01\@H\@Z
     */
    MCAPI class Json::Value& operator[](int);
    /**
     * @symbol
     * ??AValue\@Json\@\@QEBAAEBV01\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Json::Value const& operator[](std::string const&) const;
    /**
     * @symbol ??AValue\@Json\@\@QEAAAEAV01\@I\@Z
     */
    MCAPI class Json::Value& operator[](unsigned int);
    /**
     * @symbol
     * ??AValue\@Json\@\@QEAAAEAV01\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Json::Value& operator[](std::string const&);
    /**
     * @symbol ??AValue\@Json\@\@QEBAAEBV01\@I\@Z
     */
    MCAPI class Json::Value const& operator[](unsigned int) const;
    /**
     * @symbol ??AValue\@Json\@\@QEBAAEBV01\@H\@Z
     */
    MCAPI class Json::Value const& operator[](int) const;
    /**
     * @symbol ??AValue\@Json\@\@QEBAAEBV01\@PEBD\@Z
     */
    MCAPI class Json::Value const& operator[](char const*) const;
    /**
     * @symbol
     * ?removeMember\@Value\@Json\@\@QEAA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Json::Value removeMember(std::string const&);
    /**
     * @symbol ?removeMember\@Value\@Json\@\@QEAA?AV12\@PEBD\@Z
     */
    MCAPI class Json::Value removeMember(char const*);
    /**
     * @symbol ?resize\@Value\@Json\@\@QEAAXI\@Z
     */
    MCAPI void resize(unsigned int);
    /**
     * @symbol
     * ?setComment\@Value\@Json\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CommentPlacement\@2\@\@Z
     */
    MCAPI void setComment(std::string const&, enum class Json::CommentPlacement);
    /**
     * @symbol ?size\@Value\@Json\@\@QEBAIXZ
     */
    MCAPI unsigned int size() const;
    /**
     * @symbol
     * ?toStyledString\@Value\@Json\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toStyledString() const;
    /**
     * @symbol ?type\@Value\@Json\@\@QEBA?AW4ValueType\@2\@XZ
     */
    MCAPI enum class Json::ValueType type() const;
    /**
     * @symbol ??1Value\@Json\@\@QEAA\@XZ
     */
    MCAPI ~Value();
    /**
     * @symbol ?maxInt\@Value\@Json\@\@2HB
     */
    MCAPI static int const maxInt;
    /**
     * @symbol ?maxInt64\@Value\@Json\@\@2_JB
     */
    MCAPI static int64_t const maxInt64;
    /**
     * @symbol ?maxLargestInt\@Value\@Json\@\@2_JB
     */
    MCAPI static int64_t const maxLargestInt;
    /**
     * @symbol ?maxLargestUInt\@Value\@Json\@\@2_KB
     */
    MCAPI static uint64_t const maxLargestUInt;
    /**
     * @symbol ?maxUInt\@Value\@Json\@\@2IB
     */
    MCAPI static unsigned int const maxUInt;
    /**
     * @symbol ?maxUInt64\@Value\@Json\@\@2_KB
     */
    MCAPI static uint64_t const maxUInt64;
    /**
     * @symbol ?minInt\@Value\@Json\@\@2HB
     */
    MCAPI static int const minInt;
    /**
     * @symbol ?minInt64\@Value\@Json\@\@2_JB
     */
    MCAPI static int64_t const minInt64;
    /**
     * @symbol ?minLargestInt\@Value\@Json\@\@2_JB
     */
    MCAPI static int64_t const minLargestInt;
    /**
     * @symbol ?null\@Value\@Json\@\@2V12\@B
     */
    MCAPI static class Json::Value const null;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?resolveReference\@Value\@Json\@\@AEAAAEAV12\@PEBD_N\@Z
     */
    MCAPI class Json::Value& resolveReference(char const*, bool);
    // NOLINTEND
};

}; // namespace Json
