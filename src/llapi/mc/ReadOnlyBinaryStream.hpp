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
    LLAPI std::string const& getData() const;
    LLAPI size_t getLength() const;
    LLAPI size_t getReadPointer() const;
    LLAPI size_t getUnreadLength() const;
    LLAPI void setReadPointer(std::size_t size);

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
    LLAPI std::unique_ptr<class CompoundTag> getCompoundTag();

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
     * @vftbl  1
     * @symbol  ?read\@ReadOnlyBinaryStream\@\@EEAA_NPEAX_K\@Z
     */
    virtual bool read(void *, unsigned __int64);
    /**
     * @symbol  ??0ReadOnlyBinaryStream\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string const &, bool);
    /**
     * @symbol  ??0ReadOnlyBinaryStream\@\@QEAA\@$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string &&);
    /**
     * @symbol  ?canReadBool\@ReadOnlyBinaryStream\@\@QEBA_NXZ
     */
    MCAPI bool canReadBool() const;
    /**
     * @symbol  ?getBool\@ReadOnlyBinaryStream\@\@QEAA_NXZ
     */
    MCAPI bool getBool();
    /**
     * @symbol  ?getByte\@ReadOnlyBinaryStream\@\@QEAAEXZ
     */
    MCAPI unsigned char getByte();
    /**
     * @symbol  ?getDouble\@ReadOnlyBinaryStream\@\@QEAANXZ
     */
    MCAPI double getDouble();
    /**
     * @symbol  ?getFloat\@ReadOnlyBinaryStream\@\@QEAAMXZ
     */
    MCAPI float getFloat();
    /**
     * @symbol  ?getReadCompleteResult\@ReadOnlyBinaryStream\@\@QEBA?AW4StreamReadResult\@\@XZ
     */
    MCAPI enum class StreamReadResult getReadCompleteResult() const;
    /**
     * @symbol  ?getSignedBigEndianInt\@ReadOnlyBinaryStream\@\@QEAAHXZ
     */
    MCAPI int getSignedBigEndianInt();
    /**
     * @symbol  ?getSignedInt\@ReadOnlyBinaryStream\@\@QEAAHXZ
     */
    MCAPI int getSignedInt();
    /**
     * @symbol  ?getSignedInt64\@ReadOnlyBinaryStream\@\@QEAA_JXZ
     */
    MCAPI __int64 getSignedInt64();
    /**
     * @symbol  ?getSignedShort\@ReadOnlyBinaryStream\@\@QEAAFXZ
     */
    MCAPI short getSignedShort();
    /**
     * @symbol  ?getString\@ReadOnlyBinaryStream\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getString();
    /**
     * @symbol  ?getString\@ReadOnlyBinaryStream\@\@QEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool getString(std::string &);
    /**
     * @symbol  ?getUnsignedChar\@ReadOnlyBinaryStream\@\@QEAAEXZ
     */
    MCAPI unsigned char getUnsignedChar();
    /**
     * @symbol  ?getUnsignedInt\@ReadOnlyBinaryStream\@\@QEAAIXZ
     */
    MCAPI unsigned int getUnsignedInt();
    /**
     * @symbol  ?getUnsignedInt64\@ReadOnlyBinaryStream\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 getUnsignedInt64();
    /**
     * @symbol  ?getUnsignedShort\@ReadOnlyBinaryStream\@\@QEAAGXZ
     */
    MCAPI unsigned short getUnsignedShort();
    /**
     * @symbol  ?getUnsignedVarInt\@ReadOnlyBinaryStream\@\@QEAAIXZ
     */
    MCAPI unsigned int getUnsignedVarInt();
    /**
     * @symbol  ?getUnsignedVarInt64\@ReadOnlyBinaryStream\@\@QEAA_KXZ
     */
    MCAPI unsigned __int64 getUnsignedVarInt64();
    /**
     * @symbol  ?getVarInt\@ReadOnlyBinaryStream\@\@QEAAHXZ
     */
    MCAPI int getVarInt();
    /**
     * @symbol  ?getVarInt64\@ReadOnlyBinaryStream\@\@QEAA_JXZ
     */
    MCAPI __int64 getVarInt64();
    /**
     * @symbol  ?hasOverflowed\@ReadOnlyBinaryStream\@\@QEBA_NXZ
     */
    MCAPI bool hasOverflowed() const;

};