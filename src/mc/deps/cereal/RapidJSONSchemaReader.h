#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { enum class SchemaReaderState; }
namespace cereal { struct SerializerTraits; }
// clang-format on

namespace cereal {

class RapidJSONSchemaReader {

public:
    // prevent constructor by default
    RapidJSONSchemaReader& operator=(RapidJSONSchemaReader const&) = delete;
    RapidJSONSchemaReader(RapidJSONSchemaReader const&)            = delete;
    RapidJSONSchemaReader()                                        = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?isValid\@RapidJSONSchemaReader\@cereal\@\@UEBA_NXZ
     */
    virtual bool isValid() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?isObject\@RapidJSONSchemaReader\@cereal\@\@UEBA?AW4SchemaReaderState\@2\@XZ
     */
    virtual enum class cereal::SchemaReaderState isObject() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?isArray\@RapidJSONSchemaReader\@cereal\@\@UEBA?AW4SchemaReaderState\@2\@XZ
     */
    virtual enum class cereal::SchemaReaderState isArray() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?asBool\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@_N\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<bool> asBool(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?asInt8\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@C\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<signed char> asInt8(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?asUInt8\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@E\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<unsigned char> asUInt8(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?asInt16\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@F\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<short> asInt16(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?asUInt16\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@G\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<unsigned short> asUInt16(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?asInt32\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@H\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<int> asInt32(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?asUInt32\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@I\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<unsigned int> asUInt32(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?asInt64\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@_J\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<__int64> asInt64(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?asUInt64\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@_K\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<unsigned __int64> asUInt64(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?asFloat\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@M\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<float> asFloat(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?asDouble\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@N\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<double> asDouble(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol
     * ?asString\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual class std::optional<std::string> asString(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17(); // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?pushMember\@RapidJSONSchemaReader\@cereal\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual bool pushMember(std::string const&, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 19
     * @symbol
     * ?pushMember\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KAEBUSerializerTraits\@2\@\@Z
     */
    virtual std::string pushMember(unsigned __int64, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 20
     * @symbol ?pushElement\@RapidJSONSchemaReader\@cereal\@\@UEAAX_KAEBUSerializerTraits\@2\@\@Z
     */
    virtual void pushElement(unsigned __int64, struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @vftbl 21
     * @symbol ?pop\@RapidJSONSchemaReader\@cereal\@\@UEAAXAEBUSerializerTraits\@2\@\@Z
     */
    virtual void pop(struct cereal::SerializerTraits const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_RAPIDJSONSCHEMAREADER
    /**
     * @symbol ?length\@RapidJSONSchemaReader\@cereal\@\@UEAA_KAEBUSerializerTraits\@2\@\@Z
     */
    MCVAPI unsigned __int64 length(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol ?members\@RapidJSONSchemaReader\@cereal\@\@UEAA_KAEBUSerializerTraits\@2\@\@Z
     */
    MCVAPI unsigned __int64 members(struct cereal::SerializerTraits const&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RapidJSONSchemaReader(); // NOLINT
#endif
    /**
     * @symbol
     * ??0RapidJSONSchemaReader\@cereal\@\@QEAA\@AEBV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z
     */
    MCAPI RapidJSONSchemaReader(class rapidjson::GenericValue<
                                struct rapidjson::UTF8<char>,
                                class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>> const&); // NOLINT
    /**
     * @symbol
     * ??0RapidJSONSchemaReader\@cereal\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI RapidJSONSchemaReader(std::string const&); // NOLINT

    // private:
    /**
     * @symbol ?isArithmeticType\@RapidJSONSchemaReader\@cereal\@\@AEBA_NXZ
     */
    MCAPI bool isArithmeticType() const; // NOLINT

private:
};

}; // namespace cereal
