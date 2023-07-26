#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class ReadOnlyBinaryStream {

public:
    // prevent constructor by default
    ReadOnlyBinaryStream& operator=(ReadOnlyBinaryStream const&) = delete;
    ReadOnlyBinaryStream(ReadOnlyBinaryStream const&)            = delete;
    ReadOnlyBinaryStream()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?read\@ReadOnlyBinaryStream\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@PEAX_K\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> read(void*, unsigned __int64); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_READONLYBINARYSTREAM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ReadOnlyBinaryStream(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ReadOnlyBinaryStream\@\@QEAA\@$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string&&); // NOLINT
    /**
     * @symbol
     * ??0ReadOnlyBinaryStream\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI ReadOnlyBinaryStream(std::string const&, bool); // NOLINT
    /**
     * @symbol ?canReadBool\@ReadOnlyBinaryStream\@\@QEBA_NXZ
     */
    MCAPI bool canReadBool() const; // NOLINT
    /**
     * @symbol ?ensureReadCompleted\@ReadOnlyBinaryStream\@\@QEBA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<void, class std::error_code> ensureReadCompleted() const; // NOLINT
    /**
     * @symbol ?getBool\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_NVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<bool, class std::error_code> getBool(); // NOLINT
    /**
     * @symbol ?getByte\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@EVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned char, class std::error_code> getByte(); // NOLINT
    /**
     * @symbol ?getDouble\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@NVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<double, class std::error_code> getDouble(); // NOLINT
    /**
     * @symbol ?getFloat\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@MVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<float, class std::error_code> getFloat(); // NOLINT
    /**
     * @symbol ?getSignedBigEndianInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@HVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<int, class std::error_code> getSignedBigEndianInt(); // NOLINT
    /**
     * @symbol ?getSignedInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@HVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<int, class std::error_code> getSignedInt(); // NOLINT
    /**
     * @symbol ?getSignedInt64\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_JVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<__int64, class std::error_code> getSignedInt64(); // NOLINT
    /**
     * @symbol ?getSignedShort\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@FVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<short, class std::error_code> getSignedShort(); // NOLINT
    /**
     * @symbol
     * ?getString\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> getString(std::string&); // NOLINT
    /**
     * @symbol
     * ?getString\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<std::string, class std::error_code> getString(); // NOLINT
    /**
     * @symbol ?getUnsignedChar\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@EVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned char, class std::error_code> getUnsignedChar(); // NOLINT
    /**
     * @symbol ?getUnsignedInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@IVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned int, class std::error_code> getUnsignedInt(); // NOLINT
    /**
     * @symbol ?getUnsignedInt64\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_KVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned __int64, class std::error_code> getUnsignedInt64(); // NOLINT
    /**
     * @symbol ?getUnsignedShort\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@GVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned short, class std::error_code> getUnsignedShort(); // NOLINT
    /**
     * @symbol ?getUnsignedVarInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@IVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned int, class std::error_code> getUnsignedVarInt(); // NOLINT
    /**
     * @symbol ?getUnsignedVarInt64\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_KVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<unsigned __int64, class std::error_code> getUnsignedVarInt64(); // NOLINT
    /**
     * @symbol ?getVarInt\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@HVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<int, class std::error_code> getVarInt(); // NOLINT
    /**
     * @symbol ?getVarInt64\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@_JVerror_code\@std\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::Result<__int64, class std::error_code> getVarInt64(); // NOLINT
    /**
     * @symbol ?hasOverflowed\@ReadOnlyBinaryStream\@\@QEBA_NXZ
     */
    MCAPI bool hasOverflowed() const; // NOLINT
    /**
     * @symbol
     * ?readVectorList\@ReadOnlyBinaryStream\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAV?$vector\@IV?$allocator\@I\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> readVectorList(std::vector<unsigned int>&); // NOLINT
};
