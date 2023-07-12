/**
 * @file  ReadOnlyBinaryStream.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?read\@ReadOnlyBinaryStream\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@PEAX_K\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(void *, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_READONLYBINARYSTREAM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ReadOnlyBinaryStream();
#endif
    /**
     * @symbol ??0ReadOnlyBinaryStream\@\@QEAA\@$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string &&);
    /**
     * @symbol ??0ReadOnlyBinaryStream\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string const &, bool);
    /**
     * @symbol ?canReadBool\@ReadOnlyBinaryStream\@\@QEBA_NXZ
     */
    MCAPI bool canReadBool() const;
    /**
     * @symbol ?ensureReadCompleted\@ReadOnlyBinaryStream\@\@QEBA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<void, class std::error_code> ensureReadCompleted() const;
    /**
     * @symbol ?getBool\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_NVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<bool, class std::error_code> getBool();
    /**
     * @symbol ?getByte\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@EVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned char, class std::error_code> getByte();
    /**
     * @symbol ?getDouble\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@NVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<double, class std::error_code> getDouble();
    /**
     * @symbol ?getFloat\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@MVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<float, class std::error_code> getFloat();
    /**
     * @symbol ?getSignedBigEndianInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@HVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<int, class std::error_code> getSignedBigEndianInt();
    /**
     * @symbol ?getSignedInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@HVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<int, class std::error_code> getSignedInt();
    /**
     * @symbol ?getSignedInt64\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_JVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<__int64, class std::error_code> getSignedInt64();
    /**
     * @symbol ?getSignedShort\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@FVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<short, class std::error_code> getSignedShort();
    /**
     * @symbol ?getString\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> getString(std::string &);
    /**
     * @symbol ?getString\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<std::string, class std::error_code> getString();
    /**
     * @symbol ?getUnsignedChar\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@EVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned char, class std::error_code> getUnsignedChar();
    /**
     * @symbol ?getUnsignedInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@IVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned int, class std::error_code> getUnsignedInt();
    /**
     * @symbol ?getUnsignedInt64\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_KVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned __int64, class std::error_code> getUnsignedInt64();
    /**
     * @symbol ?getUnsignedShort\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@GVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned short, class std::error_code> getUnsignedShort();
    /**
     * @symbol ?getUnsignedVarInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@IVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned int, class std::error_code> getUnsignedVarInt();
    /**
     * @symbol ?getUnsignedVarInt64\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_KVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned __int64, class std::error_code> getUnsignedVarInt64();
    /**
     * @symbol ?getVarInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@HVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<int, class std::error_code> getVarInt();
    /**
     * @symbol ?getVarInt64\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_JVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<__int64, class std::error_code> getVarInt64();
    /**
     * @symbol ?hasOverflowed\@ReadOnlyBinaryStream\@\@QEBA_NXZ
     */
    MCAPI bool hasOverflowed() const;
    /**
     * @symbol ?readVectorList\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAV?$vector\@IV?$allocator\@I\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> readVectorList(std::vector<unsigned int> &);

};
