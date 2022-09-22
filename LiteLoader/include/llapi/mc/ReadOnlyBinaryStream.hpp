/**
 * @file  ReadOnlyBinaryStream.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ReadOnlyBinaryStream.
 *
 */
class ReadOnlyBinaryStream {

#define AFTER_EXTRA
// Add Member There
public:
    size_t      readPointer{};
    bool        unk;
    std::string ownBuf, *pBuf;

public:
    LIAPI std::string const& getData() const;
    LIAPI size_t getLength() const;
    LIAPI size_t getReadPointer() const;
    LIAPI size_t getUnreadLength() const;
    LIAPI void setReadPointer(std::size_t size);

    template <typename T>
    inline void readType(T&) = delete;
    template <>
    MCAPI void readType(struct CommandOriginData&);
    template <>
    MCAPI void readType(class Experiments&);
    template <>
    MCAPI void readType(struct ItemStackRequestSlotInfo&);
    template <>
    MCAPI void readType(class MoveActorAbsoluteData&);
    template <>
    MCAPI void readType(class NetworkItemStackDescriptor&);
    template <>
    MCAPI void readType(class StructureSettings&);
    template <>
    MCAPI void readType(std::vector<std::unique_ptr<class DataItem>>&);
    template <>
    inline void readType(mce::UUID& uuid)
    {
        dAccess<uint64_t, 0>(&uuid) = getUnsignedInt64();
        dAccess<uint64_t, 8>(&uuid) = getUnsignedInt64();
    }
    //template <>
    //inline void readType(NetworkItemInstanceDescriptor& descriptor)
    //{
    //    descriptor.read(*this);
    //}
    LIAPI std::unique_ptr<class CompoundTag> getCompoundTag();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_READONLYBINARYSTREAM
public:
    class ReadOnlyBinaryStream& operator=(class ReadOnlyBinaryStream const &) = delete;
    ReadOnlyBinaryStream(class ReadOnlyBinaryStream const &) = delete;
    ReadOnlyBinaryStream() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ReadOnlyBinaryStream();
    /**
     * @hash   -344600562
     * @vftbl  1
     * @symbol ?read@ReadOnlyBinaryStream@@EEAA_NPEAX_K@Z
     */
    virtual bool read(void *, unsigned __int64);
    /**
     * @hash   1608090819
     * @symbol ??0ReadOnlyBinaryStream@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string const &, bool);
    /**
     * @hash   -1465220554
     * @symbol ??0ReadOnlyBinaryStream@@QEAA@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string &&);
    /**
     * @hash   1620735450
     * @symbol ?canReadBool@ReadOnlyBinaryStream@@QEBA_NXZ
     */
    MCAPI bool canReadBool() const;
    /**
     * @hash   582867674
     * @symbol ?getBool@ReadOnlyBinaryStream@@QEAA_NXZ
     */
    MCAPI bool getBool();
    /**
     * @hash   2076183177
     * @symbol ?getByte@ReadOnlyBinaryStream@@QEAAEXZ
     */
    MCAPI unsigned char getByte();
    /**
     * @hash   1531049104
     * @symbol ?getDouble@ReadOnlyBinaryStream@@QEAANXZ
     */
    MCAPI double getDouble();
    /**
     * @hash   -106507816
     * @symbol ?getFloat@ReadOnlyBinaryStream@@QEAAMXZ
     */
    MCAPI float getFloat();
    /**
     * @hash   -2122645616
     * @symbol ?getReadCompleteResult@ReadOnlyBinaryStream@@QEBA?AW4StreamReadResult@@XZ
     */
    MCAPI enum StreamReadResult getReadCompleteResult() const;
    /**
     * @hash   -202674344
     * @symbol ?getSignedBigEndianInt@ReadOnlyBinaryStream@@QEAAHXZ
     */
    MCAPI int getSignedBigEndianInt();
    /**
     * @hash   -313927334
     * @symbol ?getSignedInt@ReadOnlyBinaryStream@@QEAAHXZ
     */
    MCAPI int getSignedInt();
    /**
     * @hash   -1406839697
     * @symbol ?getSignedInt64@ReadOnlyBinaryStream@@QEAA_JXZ
     */
    MCAPI __int64 getSignedInt64();
    /**
     * @hash   -177593505
     * @symbol ?getSignedShort@ReadOnlyBinaryStream@@QEAAFXZ
     */
    MCAPI short getSignedShort();
    /**
     * @hash   -948797754
     * @symbol ?getString@ReadOnlyBinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getString();
    /**
     * @hash   -1513471347
     * @symbol ?getString@ReadOnlyBinaryStream@@QEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool getString(std::string &);
    /**
     * @hash   -1777756759
     * @symbol ?getUnsignedChar@ReadOnlyBinaryStream@@QEAAEXZ
     */
    MCAPI unsigned char getUnsignedChar();
    /**
     * @hash   -436194524
     * @symbol ?getUnsignedInt@ReadOnlyBinaryStream@@QEAAIXZ
     */
    MCAPI unsigned int getUnsignedInt();
    /**
     * @hash   307814567
     * @symbol ?getUnsignedInt64@ReadOnlyBinaryStream@@QEAA_KXZ
     */
    MCAPI unsigned __int64 getUnsignedInt64();
    /**
     * @hash   -1740845463
     * @symbol ?getUnsignedShort@ReadOnlyBinaryStream@@QEAAGXZ
     */
    MCAPI unsigned short getUnsignedShort();
    /**
     * @hash   627266834
     * @symbol ?getUnsignedVarInt@ReadOnlyBinaryStream@@QEAAIXZ
     */
    MCAPI unsigned int getUnsignedVarInt();
    /**
     * @hash   -778927145
     * @symbol ?getUnsignedVarInt64@ReadOnlyBinaryStream@@QEAA_KXZ
     */
    MCAPI unsigned __int64 getUnsignedVarInt64();
    /**
     * @hash   1041705976
     * @symbol ?getVarInt@ReadOnlyBinaryStream@@QEAAHXZ
     */
    MCAPI int getVarInt();
    /**
     * @hash   -2057828509
     * @symbol ?getVarInt64@ReadOnlyBinaryStream@@QEAA_JXZ
     */
    MCAPI __int64 getVarInt64();

};