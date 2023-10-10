#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NbtIo {
public:
    // LLNDAPI static std::string nbtListToBinary(std::vector<std::unique_ptr<CompoundTag>> const& tags, bool
    // isLittleEndian = true); LLNDAPI static std::vector<std::unique_ptr<CompoundTag>>
    // nbtListFromBinary(std::string_view data, bool isLittleEndian = true); LLNDAPI static std::string
    // nbtListToNetwork(std::vector<std::unique_ptr<CompoundTag>> const& tags); LLNDAPI static
    // std::vector<std::unique_ptr<CompoundTag>> nbtListFromNetwork(std::string_view data);

    // NOLINTBEGIN
    // symbol:
    // ?read@NbtIo@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVIDataInput@@@Z
    MCAPI static std::unique_ptr<class CompoundTag> read(class IDataInput&);

    // symbol: ?write@NbtIo@@SAXPEBVCompoundTag@@AEAVIDataOutput@@@Z
    MCAPI static void write(class CompoundTag const*, class IDataOutput&);

    // NOLINTEND
};
