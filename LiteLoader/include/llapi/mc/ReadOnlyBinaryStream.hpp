/**
 * @file  ReadOnlyBinaryStream.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ReadOnlyBinaryStream();
    /**
     * @hash   406916814
     * @vftbl  1
     * @symbol  ?read\@ReadOnlyBinaryStream\@\@EEAA_NPEAX_K\@Z
     */
    virtual bool read(void *, unsigned __int64);
    /**
     * @hash   -1935374477
     * @symbol  ??0ReadOnlyBinaryStream\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string const &, bool);
    /**
     * @hash   -713718554
     * @symbol  ??0ReadOnlyBinaryStream\@\@QEAA\@$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string &&);
    /**
     * @hash   -1922745222
     * @symbol  ?canReadBool\@ReadOnlyBinaryStream\@\@QEBA_NXZ
     */
    MCAPI bool canReadBool() const;
    /**
     * @hash   1334354298
     * @symbol  ?getBool\@ReadOnlyBinaryStream\@\@QEAA_NXZ
     */
    MCAPI bool getBool();
    /**
     * @hash   -1467297495
     * @symbol  ?getByte\@ReadOnlyBinaryStream\@\@QEAAEXZ
     */
    MCAPI unsigned char getByte();
    /**
     * @hash   -2012416192
     * @symbol  ?getDouble\@ReadOnlyBinaryStream\@\@QEAANXZ
     */
    MCAPI double getDouble();
    /**
     * @hash   644994184
     * @symbol  ?getFloat\@ReadOnlyBinaryStream\@\@QEAAMXZ
     */
    MCAPI float getFloat();
    /**
     * @hash   -1371143616
     * @symbol  ?getReadCompleteResult\@ReadOnlyBinaryStream\@\@QEBA?AW4StreamReadResult\@\@XZ
     */
    MCAPI enum class StreamReadResult getReadCompleteResult() const;
    /**
     * @hash   548827656
     * @symbol  ?getSignedBigEndianInt\@ReadOnlyBinaryStream\@\@QEAAHXZ
     */
    MCAPI int getSignedBigEndianInt();
    /**
     * @hash   437574666
     * @symbol  ?getSignedInt\@ReadOnlyBinaryStream\@\@QEAAHXZ
     */
    MCAPI int getSignedInt();
    /**
     * @hash   -655337697
     * @symbol  ?getSignedInt64\@ReadOnlyBinaryStream\@\@QEAA_JXZ
     */
    MCAPI __int64 getSignedInt64();
    /**
     * @hash   573908495
     * @symbol  ?getSignedShort\@ReadOnlyBinaryStream\@\@QEAAFXZ
     */
    MCAPI short getSignedShort();
    /**
     * @hash   -197295754
     * @symbol  ?getString\@ReadOnlyBinaryStream\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getString();
    /**
     * @hash   -761969347
     * @symbol  ?getString\@ReadOnlyBinaryStream\@\@QEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool getString(std::string &);
    /**
     * @hash   -1026270135
     * @symbol  ?getUnsignedChar\@ReadOnlyBinaryStream\@\@QEAAEXZ
     */
    MCAPI unsigned char getUnsignedChar();
    /**
     * @hash   315307476
     * @symbol  ?getUnsignedInt\@ReadOnlyBinaryStream\@\@QEAAIXZ
     */
    MCAPI unsigned int getUnsignedInt();
    /**
     * @hash   1059316567
     * @symbol  ?getUnsignedInt64\@ReadOnlyBinaryStream\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 getUnsignedInt64();
    /**
     * @hash   -989343463
     * @symbol  ?getUnsignedShort\@ReadOnlyBinaryStream\@\@QEAAGXZ
     */
    MCAPI unsigned short getUnsignedShort();
    /**
     * @hash   1378784210
     * @symbol  ?getUnsignedVarInt\@ReadOnlyBinaryStream\@\@QEAAIXZ
     */
    MCAPI unsigned int getUnsignedVarInt();
    /**
     * @hash   -27409769
     * @symbol  ?getUnsignedVarInt64\@ReadOnlyBinaryStream\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 getUnsignedVarInt64();
    /**
     * @hash   1793223352
     * @symbol  ?getVarInt\@ReadOnlyBinaryStream\@\@QEAAHXZ
     */
    MCAPI int getVarInt();
    /**
     * @hash   -1306311133
     * @symbol  ?getVarInt64\@ReadOnlyBinaryStream\@\@QEAA_JXZ
     */
    MCAPI __int64 getVarInt64();

};