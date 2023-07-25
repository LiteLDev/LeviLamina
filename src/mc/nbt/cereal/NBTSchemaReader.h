#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { enum class SchemaReaderState; }
namespace cereal { struct SerializerTraits; }
// clang-format on

class NBTSchemaReader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTSCHEMAREADER
public:
    NBTSchemaReader& operator=(NBTSchemaReader const&) = delete;
    NBTSchemaReader(NBTSchemaReader const&)            = delete;
    NBTSchemaReader()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isValid\@NBTSchemaReader\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 2
     * @symbol ?isObject\@NBTSchemaReader\@\@UEBA?AW4SchemaReaderState\@cereal\@\@XZ
     */
    virtual enum class cereal::SchemaReaderState isObject() const;
    /**
     * @vftbl 3
     * @symbol ?isArray\@NBTSchemaReader\@\@UEBA?AW4SchemaReaderState\@cereal\@\@XZ
     */
    virtual enum class cereal::SchemaReaderState isArray() const;
    /**
     * @vftbl 4
     * @symbol ?asBool\@NBTSchemaReader\@\@UEAA?AV?$optional\@_N\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual class std::optional<bool> asBool(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol ?asFloat\@NBTSchemaReader\@\@UEAA?AV?$optional\@M\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual class std::optional<float> asFloat(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 14
     * @symbol ?asDouble\@NBTSchemaReader\@\@UEAA?AV?$optional\@N\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual class std::optional<double> asDouble(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 15
     * @symbol
     * ?asString\@NBTSchemaReader\@\@UEAA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual class std::optional<std::string> asString(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 16
     * @symbol ?members\@NBTSchemaReader\@\@UEAA_KAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual unsigned __int64 members(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 17
     * @symbol ?length\@NBTSchemaReader\@\@UEAA_KAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual unsigned __int64 length(struct cereal::SerializerTraits const&);
    /**
     * @vftbl 18
     * @symbol
     * ?pushMember\@NBTSchemaReader\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual bool pushMember(std::string const&, struct cereal::SerializerTraits const&);
    /**
     * @vftbl 19
     * @symbol
     * ?pushMember\@NBTSchemaReader\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual std::string pushMember(unsigned __int64, struct cereal::SerializerTraits const&);
    /**
     * @vftbl 20
     * @symbol ?pushElement\@NBTSchemaReader\@\@UEAAX_KAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual void pushElement(unsigned __int64, struct cereal::SerializerTraits const&);
    /**
     * @vftbl 21
     * @symbol ?pop\@NBTSchemaReader\@\@UEAAXAEBUSerializerTraits\@cereal\@\@\@Z
     */
    virtual void pop(struct cereal::SerializerTraits const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBTSCHEMAREADER
    /**
     * @symbol ?asInt16\@NBTSchemaReader\@\@UEAA?AV?$optional\@F\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI class std::optional<short> asInt16(struct cereal::SerializerTraits const&);
    /**
     * @symbol ?asInt32\@NBTSchemaReader\@\@UEAA?AV?$optional\@H\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI class std::optional<int> asInt32(struct cereal::SerializerTraits const&);
    /**
     * @symbol ?asInt64\@NBTSchemaReader\@\@UEAA?AV?$optional\@_J\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI class std::optional<__int64> asInt64(struct cereal::SerializerTraits const&);
    /**
     * @symbol ?asInt8\@NBTSchemaReader\@\@UEAA?AV?$optional\@C\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI class std::optional<signed char> asInt8(struct cereal::SerializerTraits const&);
    /**
     * @symbol ?asUInt16\@NBTSchemaReader\@\@UEAA?AV?$optional\@G\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI class std::optional<unsigned short> asUInt16(struct cereal::SerializerTraits const&);
    /**
     * @symbol ?asUInt32\@NBTSchemaReader\@\@UEAA?AV?$optional\@I\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI class std::optional<unsigned int> asUInt32(struct cereal::SerializerTraits const&);
    /**
     * @symbol ?asUInt64\@NBTSchemaReader\@\@UEAA?AV?$optional\@_K\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI class std::optional<unsigned __int64> asUInt64(struct cereal::SerializerTraits const&);
    /**
     * @symbol ?asUInt8\@NBTSchemaReader\@\@UEAA?AV?$optional\@E\@std\@\@AEBUSerializerTraits\@cereal\@\@\@Z
     */
    MCVAPI class std::optional<unsigned char> asUInt8(struct cereal::SerializerTraits const&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NBTSchemaReader();
#endif
    /**
     * @symbol ??0NBTSchemaReader\@\@QEAA\@V?$not_null\@PEBVCompoundTag\@\@\@gsl\@\@\@Z
     */
    MCAPI NBTSchemaReader(class gsl::not_null<class CompoundTag const*>);
};
