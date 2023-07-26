#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    // Value inner types define
    class CZString {

    public:
        // prevent constructor by default
        CZString& operator=(CZString const&) = delete;
        CZString()                           = delete;

    public:
        /**
         * @symbol ??0CZString\@Value\@Json\@\@QEAA\@AEBV012\@\@Z
         */
        MCAPI CZString(class Json::Value::CZString const&); // NOLINT
        /**
         * @symbol ??1CZString\@Value\@Json\@\@QEAA\@XZ
         */
        MCAPI ~CZString(); // NOLINT
    };

public:
    // prevent constructor by default
    Value() = delete;

public:
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@I\@Z
     */
    MCAPI Value(unsigned int); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@N\@Z
     */
    MCAPI Value(double); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@_K\@Z
     */
    MCAPI Value(unsigned __int64); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@_J\@Z
     */
    MCAPI Value(__int64); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI Value(std::string const&); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI Value(class Json::Value const&); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@PEBD\@Z
     */
    MCAPI Value(char const*); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@W4ValueType\@1\@\@Z
     */
    MCAPI Value(enum class Json::ValueType); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@_N\@Z
     */
    MCAPI Value(bool); // NOLINT
    /**
     * @symbol ??0Value\@Json\@\@QEAA\@H\@Z
     */
    MCAPI Value(int); // NOLINT
    /**
     * @symbol ?append\@Value\@Json\@\@QEAAAEAV12\@AEBV12\@\@Z
     */
    MCAPI class Json::Value& append(class Json::Value const&); // NOLINT
    /**
     * @symbol ?asBool\@Value\@Json\@\@QEBA_N_N\@Z
     */
    MCAPI bool asBool(bool) const; // NOLINT
    /**
     * @symbol ?asCString\@Value\@Json\@\@QEBAPEBDXZ
     */
    MCAPI char const* asCString() const; // NOLINT
    /**
     * @symbol ?asDouble\@Value\@Json\@\@QEBANN\@Z
     */
    MCAPI double asDouble(double) const; // NOLINT
    /**
     * @symbol ?asFloat\@Value\@Json\@\@QEBAMM\@Z
     */
    MCAPI float asFloat(float) const; // NOLINT
    /**
     * @symbol ?asInt\@Value\@Json\@\@QEBAHH\@Z
     */
    MCAPI int asInt(int) const; // NOLINT
    /**
     * @symbol ?asInt64\@Value\@Json\@\@QEBA_J_J\@Z
     */
    MCAPI __int64 asInt64(__int64) const; // NOLINT
    /**
     * @symbol ?asLargestInt\@Value\@Json\@\@QEBA_JXZ
     */
    MCAPI __int64 asLargestInt() const; // NOLINT
    /**
     * @symbol ?asLargestUInt\@Value\@Json\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 asLargestUInt() const; // NOLINT
    /**
     * @symbol
     * ?asString\@Value\@Json\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI std::string asString(std::string const&) const; // NOLINT
    /**
     * @symbol ?asUInt\@Value\@Json\@\@QEBAII\@Z
     */
    MCAPI unsigned int asUInt(unsigned int) const; // NOLINT
    /**
     * @symbol ?asUInt64\@Value\@Json\@\@QEBA_K_K\@Z
     */
    MCAPI unsigned __int64 asUInt64(unsigned __int64) const; // NOLINT
    /**
     * @symbol ?begin\@Value\@Json\@\@QEAA?AVValueIterator\@2\@XZ
     */
    MCAPI class Json::ValueIterator begin(); // NOLINT
    /**
     * @symbol ?begin\@Value\@Json\@\@QEBA?AVValueConstIterator\@2\@XZ
     */
    MCAPI class Json::ValueConstIterator begin() const; // NOLINT
    /**
     * @symbol ?clear\@Value\@Json\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?compare\@Value\@Json\@\@QEBAHAEBV12\@\@Z
     */
    MCAPI int compare(class Json::Value const&) const; // NOLINT
    /**
     * @symbol ?empty\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool empty() const; // NOLINT
    /**
     * @symbol ?end\@Value\@Json\@\@QEAA?AVValueIterator\@2\@XZ
     */
    MCAPI class Json::ValueIterator end(); // NOLINT
    /**
     * @symbol ?end\@Value\@Json\@\@QEBA?AVValueConstIterator\@2\@XZ
     */
    MCAPI class Json::ValueConstIterator end() const; // NOLINT
    /**
     * @symbol
     * ?get\@Value\@Json\@\@QEBA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV12\@\@Z
     */
    MCAPI class Json::Value get(std::string const&, class Json::Value const&) const; // NOLINT
    /**
     * @symbol ?get\@Value\@Json\@\@QEBA?AV12\@PEBDAEBV12\@\@Z
     */
    MCAPI class Json::Value get(char const*, class Json::Value const&) const; // NOLINT
    /**
     * @symbol
     * ?getComment\@Value\@Json\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CommentPlacement\@2\@\@Z
     */
    MCAPI std::string getComment(enum class Json::CommentPlacement) const; // NOLINT
    /**
     * @symbol
     * ?getMemberNames\@Value\@Json\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getMemberNames() const; // NOLINT
    /**
     * @symbol ?hasComment\@Value\@Json\@\@QEBA_NW4CommentPlacement\@2\@\@Z
     */
    MCAPI bool hasComment(enum class Json::CommentPlacement) const; // NOLINT
    /**
     * @symbol ?isArray\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isArray() const; // NOLINT
    /**
     * @symbol ?isBool\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isBool() const; // NOLINT
    /**
     * @symbol ?isConvertibleTo\@Value\@Json\@\@QEBA_NW4ValueType\@2\@\@Z
     */
    MCAPI bool isConvertibleTo(enum class Json::ValueType) const; // NOLINT
    /**
     * @symbol ?isDouble\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isDouble() const; // NOLINT
    /**
     * @symbol ?isInt\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isInt() const; // NOLINT
    /**
     * @symbol ?isIntegral\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isIntegral() const; // NOLINT
    /**
     * @symbol
     * ?isMember\@Value\@Json\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isMember(std::string const&) const; // NOLINT
    /**
     * @symbol ?isMember\@Value\@Json\@\@QEBA_NPEBD\@Z
     */
    MCAPI bool isMember(char const*) const; // NOLINT
    /**
     * @symbol ?isNull\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const; // NOLINT
    /**
     * @symbol ?isNumeric\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isNumeric() const; // NOLINT
    /**
     * @symbol ?isObject\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isObject() const; // NOLINT
    /**
     * @symbol ?isString\@Value\@Json\@\@QEBA_NXZ
     */
    MCAPI bool isString() const; // NOLINT
    /**
     * @symbol ??9Value\@Json\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator!=(class Json::Value const&) const; // NOLINT
    /**
     * @symbol ??MValue\@Json\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator<(class Json::Value const&) const; // NOLINT
    /**
     * @symbol ??4Value\@Json\@\@QEAAAEAV01\@AEBV01\@\@Z
     */
    MCAPI class Json::Value& operator=(class Json::Value const&); // NOLINT
    /**
     * @symbol ??8Value\@Json\@\@QEBA_NAEBV01\@\@Z
     */
    MCAPI bool operator==(class Json::Value const&) const; // NOLINT
    /**
     * @symbol ??AValue\@Json\@\@QEAAAEAV01\@PEBD\@Z
     */
    MCAPI class Json::Value& operator[](char const*); // NOLINT
    /**
     * @symbol ??AValue\@Json\@\@QEAAAEAV01\@H\@Z
     */
    MCAPI class Json::Value& operator[](int); // NOLINT
    /**
     * @symbol
     * ??AValue\@Json\@\@QEBAAEBV01\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Json::Value const& operator[](std::string const&) const; // NOLINT
    /**
     * @symbol ??AValue\@Json\@\@QEAAAEAV01\@I\@Z
     */
    MCAPI class Json::Value& operator[](unsigned int); // NOLINT
    /**
     * @symbol
     * ??AValue\@Json\@\@QEAAAEAV01\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Json::Value& operator[](std::string const&); // NOLINT
    /**
     * @symbol ??AValue\@Json\@\@QEBAAEBV01\@I\@Z
     */
    MCAPI class Json::Value const& operator[](unsigned int) const; // NOLINT
    /**
     * @symbol ??AValue\@Json\@\@QEBAAEBV01\@H\@Z
     */
    MCAPI class Json::Value const& operator[](int) const; // NOLINT
    /**
     * @symbol ??AValue\@Json\@\@QEBAAEBV01\@PEBD\@Z
     */
    MCAPI class Json::Value const& operator[](char const*) const; // NOLINT
    /**
     * @symbol
     * ?removeMember\@Value\@Json\@\@QEAA?AV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Json::Value removeMember(std::string const&); // NOLINT
    /**
     * @symbol ?removeMember\@Value\@Json\@\@QEAA?AV12\@PEBD\@Z
     */
    MCAPI class Json::Value removeMember(char const*); // NOLINT
    /**
     * @symbol ?resize\@Value\@Json\@\@QEAAXI\@Z
     */
    MCAPI void resize(unsigned int); // NOLINT
    /**
     * @symbol
     * ?setComment\@Value\@Json\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CommentPlacement\@2\@\@Z
     */
    MCAPI void setComment(std::string const&, enum class Json::CommentPlacement); // NOLINT
    /**
     * @symbol ?size\@Value\@Json\@\@QEBAIXZ
     */
    MCAPI unsigned int size() const; // NOLINT
    /**
     * @symbol
     * ?toStyledString\@Value\@Json\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toStyledString() const; // NOLINT
    /**
     * @symbol ?type\@Value\@Json\@\@QEBA?AW4ValueType\@2\@XZ
     */
    MCAPI enum class Json::ValueType type() const; // NOLINT
    /**
     * @symbol ??1Value\@Json\@\@QEAA\@XZ
     */
    MCAPI ~Value(); // NOLINT
    /**
     * @symbol ?maxInt\@Value\@Json\@\@2HB
     */
    MCAPI static int const maxInt; // NOLINT
    /**
     * @symbol ?maxInt64\@Value\@Json\@\@2_JB
     */
    MCAPI static __int64 const maxInt64; // NOLINT
    /**
     * @symbol ?maxLargestInt\@Value\@Json\@\@2_JB
     */
    MCAPI static __int64 const maxLargestInt; // NOLINT
    /**
     * @symbol ?maxLargestUInt\@Value\@Json\@\@2_KB
     */
    MCAPI static unsigned __int64 const maxLargestUInt; // NOLINT
    /**
     * @symbol ?maxUInt\@Value\@Json\@\@2IB
     */
    MCAPI static unsigned int const maxUInt; // NOLINT
    /**
     * @symbol ?maxUInt64\@Value\@Json\@\@2_KB
     */
    MCAPI static unsigned __int64 const maxUInt64; // NOLINT
    /**
     * @symbol ?minInt\@Value\@Json\@\@2HB
     */
    MCAPI static int const minInt; // NOLINT
    /**
     * @symbol ?minInt64\@Value\@Json\@\@2_JB
     */
    MCAPI static __int64 const minInt64; // NOLINT
    /**
     * @symbol ?minLargestInt\@Value\@Json\@\@2_JB
     */
    MCAPI static __int64 const minLargestInt; // NOLINT
    /**
     * @symbol ?null\@Value\@Json\@\@2V12\@B
     */
    MCAPI static class Json::Value const null; // NOLINT

    // private:
    /**
     * @symbol ?resolveReference\@Value\@Json\@\@AEAAAEAV12\@PEBD_N\@Z
     */
    MCAPI class Json::Value& resolveReference(char const*, bool); // NOLINT

private:
};

}; // namespace Json
