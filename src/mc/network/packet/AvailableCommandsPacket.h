#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class AvailableCommandsPacket : public ::Packet {
public:
    // AvailableCommandsPacket inner types declare
    // clang-format off
    struct ChainedSubcommandData;
    struct CommandData;
    struct ConstrainedValueData;
    struct EnumData;
    struct OverloadData;
    struct ParamData;
    struct SoftEnumData;
    // clang-format on

    // AvailableCommandsPacket inner types define
    struct ChainedSubcommandData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET_CHAINEDSUBCOMMANDDATA
    public:
        ChainedSubcommandData& operator=(ChainedSubcommandData const&) = delete;
        ChainedSubcommandData(ChainedSubcommandData const&)            = delete;
        ChainedSubcommandData()                                        = delete;
#endif

    public:
    };

    struct CommandData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET_COMMANDDATA
    public:
        CommandData& operator=(CommandData const&) = delete;
        CommandData(CommandData const&)            = delete;
        CommandData()                              = delete;
#endif

    public:
        /**
         * @symbol ??0CommandData\@AvailableCommandsPacket\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI CommandData(struct AvailableCommandsPacket::CommandData&&);
        /**
         * @symbol ??1CommandData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~CommandData();
    };

    struct ConstrainedValueData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET_CONSTRAINEDVALUEDATA
    public:
        ConstrainedValueData& operator=(ConstrainedValueData const&) = delete;
        ConstrainedValueData(ConstrainedValueData const&)            = delete;
        ConstrainedValueData()                                       = delete;
#endif

    public:
        /**
         * @symbol ??1ConstrainedValueData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~ConstrainedValueData();
    };

    struct EnumData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET_ENUMDATA
    public:
        EnumData& operator=(EnumData const&) = delete;
        EnumData(EnumData const&)            = delete;
        EnumData()                           = delete;
#endif

    public:
        /**
         * @symbol ??1EnumData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~EnumData();
    };

    struct OverloadData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET_OVERLOADDATA
    public:
        OverloadData& operator=(OverloadData const&) = delete;
        OverloadData(OverloadData const&)            = delete;
        OverloadData()                               = delete;
#endif

    public:
        /**
         * @symbol ??1OverloadData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~OverloadData();
    };

    struct ParamData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET_PARAMDATA
    public:
        ParamData& operator=(ParamData const&) = delete;
        ParamData(ParamData const&)            = delete;
        ParamData()                            = delete;
#endif

    public:
        /**
         * @symbol ??1ParamData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~ParamData();
    };

    struct SoftEnumData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET_SOFTENUMDATA
    public:
        SoftEnumData& operator=(SoftEnumData const&) = delete;
        SoftEnumData(SoftEnumData const&)            = delete;
        SoftEnumData()                               = delete;
#endif

    public:
        /**
         * @symbol ??1SoftEnumData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~SoftEnumData();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLECOMMANDSPACKET
public:
    AvailableCommandsPacket& operator=(AvailableCommandsPacket const&) = delete;
    AvailableCommandsPacket(AvailableCommandsPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AvailableCommandsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AvailableCommandsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AvailableCommandsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AvailableCommandsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AVAILABLECOMMANDSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AvailableCommandsPacket();
#endif
    /**
     * @symbol ??0AvailableCommandsPacket\@\@QEAA\@XZ
     */
    MCAPI AvailableCommandsPacket();
    /**
     * @symbol
     * ??0AvailableCommandsPacket\@\@QEAA\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@00$$QEAV?$vector\@UEnumData\@AvailableCommandsPacket\@\@V?$allocator\@UEnumData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UChainedSubcommandData\@AvailableCommandsPacket\@\@V?$allocator\@UChainedSubcommandData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UConstrainedValueData\@AvailableCommandsPacket\@\@V?$allocator\@UConstrainedValueData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UCommandData\@AvailableCommandsPacket\@\@V?$allocator\@UCommandData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@USoftEnumData\@AvailableCommandsPacket\@\@V?$allocator\@USoftEnumData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI
    AvailableCommandsPacket(std::vector<std::string> const&, std::vector<std::string> const&, std::vector<std::string> const&, std::vector<struct AvailableCommandsPacket::EnumData>&&, std::vector<struct AvailableCommandsPacket::ChainedSubcommandData>&&, std::vector<struct AvailableCommandsPacket::ConstrainedValueData>&&, std::vector<struct AvailableCommandsPacket::CommandData>&&, std::vector<struct AvailableCommandsPacket::SoftEnumData>&&);
};
