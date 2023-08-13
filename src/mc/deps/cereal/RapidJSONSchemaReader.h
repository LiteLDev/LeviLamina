#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SchemaReader.h"

// auto generated forward declare list
// clang-format off
namespace cereal { enum class SchemaReaderState; }
namespace cereal { struct SerializerTraits; }
// clang-format on

namespace cereal {

class RapidJSONSchemaReader : public ::cereal::SchemaReader {

public:
    // prevent constructor by default
    RapidJSONSchemaReader& operator=(RapidJSONSchemaReader const&) = delete;
    RapidJSONSchemaReader(RapidJSONSchemaReader const&)            = delete;
    RapidJSONSchemaReader()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isValid\@RapidJSONSchemaReader\@cereal\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 2
     * @symbol ?isObject\@RapidJSONSchemaReader\@cereal\@\@UEBA?AW4SchemaReaderState\@2\@XZ
     */
    virtual enum class cereal::SchemaReaderState isObject() const;
    /**
     * @vftbl 3
     * @symbol ?isArray\@RapidJSONSchemaReader\@cereal\@\@UEBA?AW4SchemaReaderState\@2\@XZ
     */
    virtual enum class cereal::SchemaReaderState isArray() const;
    /**
     * @vftbl 4
     * @symbol ?asBool\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@_N\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<bool> asBool(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 5
     * @symbol ?asInt8\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@C\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<signed char> asInt8(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 6
     * @symbol ?asUInt8\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@E\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<unsigned char> asUInt8(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 7
     * @symbol ?asInt16\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@F\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<short> asInt16(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 8
     * @symbol ?asUInt16\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@G\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<unsigned short> asUInt16(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 9
     * @symbol ?asInt32\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@H\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<int> asInt32(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 10
     * @symbol ?asUInt32\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@I\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<unsigned int> asUInt32(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 11
     * @symbol ?asInt64\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@_J\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<int64_t> asInt64(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 12
     * @symbol ?asUInt64\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@_K\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<uint64_t> asUInt64(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 13
     * @symbol ?asFloat\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@M\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<float> asFloat(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 14
     * @symbol ?asDouble\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@N\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<double> asDouble(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 15
     * @symbol
     * ?asString\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual std::optional<std::string> asString(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 18
     * @symbol
     * ?pushMember\@RapidJSONSchemaReader\@cereal\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUSerializerTraits\@2\@\@Z
     */
    virtual bool pushMember(std::string const&, struct cereal::SerializerTraits const&);
    /**
     * @vftbl 19
     * @symbol
     * ?pushMember\@RapidJSONSchemaReader\@cereal\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KAEBUSerializerTraits\@2\@\@Z
     */
    virtual std::string pushMember(uint64_t, struct cereal::SerializerTraits const&);
    /**
     * @vftbl 20
     * @symbol ?pushElement\@RapidJSONSchemaReader\@cereal\@\@UEAAX_KAEBUSerializerTraits\@2\@\@Z
     */
    virtual void pushElement(uint64_t, struct cereal::SerializerTraits const&);
    /**
     * @vftbl 21
     * @symbol ?pop\@RapidJSONSchemaReader\@cereal\@\@UEAAXAEBUSerializerTraits\@2\@\@Z
     */
    virtual void pop(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 22
     * @symbol ?isSequenceReader\@SchemaReader\@cereal\@\@UEBA_NXZ
     */
    virtual bool isSequenceReader() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CEREAL_RAPIDJSONSCHEMAREADER
    /**
     * @symbol ?length\@RapidJSONSchemaReader\@cereal\@\@UEAA_KAEBUSerializerTraits\@2\@\@Z
     */
    MCVAPI uint64_t length(struct cereal::SerializerTraits const&);
    /**
     * @symbol ?members\@RapidJSONSchemaReader\@cereal\@\@UEAA_KAEBUSerializerTraits\@2\@\@Z
     */
    MCVAPI uint64_t members(struct cereal::SerializerTraits const&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RapidJSONSchemaReader();
#endif
    /**
     * @symbol
     * ??0RapidJSONSchemaReader\@cereal\@\@QEAA\@AEBV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@\@Z
     */
    MCAPI RapidJSONSchemaReader(class rapidjson::GenericValue<
                                struct rapidjson::UTF8<char>,
                                class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>> const&);
    /**
     * @symbol
     * ??0RapidJSONSchemaReader\@cereal\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI RapidJSONSchemaReader(std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?isArithmeticType\@RapidJSONSchemaReader\@cereal\@\@AEBA_NXZ
     */
    MCAPI bool isArithmeticType() const;
    // NOLINTEND
};

}; // namespace cereal
