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

    public:
        // prevent constructor by default
        ChainedSubcommandData& operator=(ChainedSubcommandData const&) = delete;
        ChainedSubcommandData(ChainedSubcommandData const&)            = delete;
        ChainedSubcommandData()                                        = delete;
    };

    struct CommandData {

    public:
        // prevent constructor by default
        CommandData& operator=(CommandData const&) = delete;
        CommandData(CommandData const&)            = delete;
        CommandData()                              = delete;

    public:
        /**
         * @symbol ??0CommandData\@AvailableCommandsPacket\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI CommandData(struct AvailableCommandsPacket::CommandData&&); // NOLINT
        /**
         * @symbol ??1CommandData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~CommandData(); // NOLINT
    };

    struct ConstrainedValueData {

    public:
        // prevent constructor by default
        ConstrainedValueData& operator=(ConstrainedValueData const&) = delete;
        ConstrainedValueData(ConstrainedValueData const&)            = delete;
        ConstrainedValueData()                                       = delete;

    public:
        /**
         * @symbol ??1ConstrainedValueData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~ConstrainedValueData(); // NOLINT
    };

    struct EnumData {

    public:
        // prevent constructor by default
        EnumData& operator=(EnumData const&) = delete;
        EnumData(EnumData const&)            = delete;
        EnumData()                           = delete;

    public:
        /**
         * @symbol ??1EnumData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~EnumData(); // NOLINT
    };

    struct OverloadData {

    public:
        // prevent constructor by default
        OverloadData& operator=(OverloadData const&) = delete;
        OverloadData(OverloadData const&)            = delete;
        OverloadData()                               = delete;

    public:
        /**
         * @symbol ??1OverloadData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~OverloadData(); // NOLINT
    };

    struct ParamData {

    public:
        // prevent constructor by default
        ParamData& operator=(ParamData const&) = delete;
        ParamData(ParamData const&)            = delete;
        ParamData()                            = delete;

    public:
        /**
         * @symbol ??1ParamData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~ParamData(); // NOLINT
    };

    struct SoftEnumData {

    public:
        // prevent constructor by default
        SoftEnumData& operator=(SoftEnumData const&) = delete;
        SoftEnumData(SoftEnumData const&)            = delete;
        SoftEnumData()                               = delete;

    public:
        /**
         * @symbol ??1SoftEnumData\@AvailableCommandsPacket\@\@QEAA\@XZ
         */
        MCAPI ~SoftEnumData(); // NOLINT
    };

public:
    // prevent constructor by default
    AvailableCommandsPacket& operator=(AvailableCommandsPacket const&) = delete;
    AvailableCommandsPacket(AvailableCommandsPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@AvailableCommandsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@AvailableCommandsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@AvailableCommandsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AvailableCommandsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AVAILABLECOMMANDSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AvailableCommandsPacket(); // NOLINT
#endif
    /**
     * @symbol ??0AvailableCommandsPacket\@\@QEAA\@XZ
     */
    MCAPI AvailableCommandsPacket(); // NOLINT
    /**
     * @symbol
     * ??0AvailableCommandsPacket\@\@QEAA\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@00$$QEAV?$vector\@UEnumData\@AvailableCommandsPacket\@\@V?$allocator\@UEnumData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UChainedSubcommandData\@AvailableCommandsPacket\@\@V?$allocator\@UChainedSubcommandData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UConstrainedValueData\@AvailableCommandsPacket\@\@V?$allocator\@UConstrainedValueData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@UCommandData\@AvailableCommandsPacket\@\@V?$allocator\@UCommandData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@$$QEAV?$vector\@USoftEnumData\@AvailableCommandsPacket\@\@V?$allocator\@USoftEnumData\@AvailableCommandsPacket\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI
    AvailableCommandsPacket(std::vector<std::string> const&, std::vector<std::string> const&, std::vector<std::string> const&, std::vector<struct AvailableCommandsPacket::EnumData>&&, std::vector<struct AvailableCommandsPacket::ChainedSubcommandData>&&, std::vector<struct AvailableCommandsPacket::ConstrainedValueData>&&, std::vector<struct AvailableCommandsPacket::CommandData>&&, std::vector<struct AvailableCommandsPacket::SoftEnumData>&&); // NOLINT
};
