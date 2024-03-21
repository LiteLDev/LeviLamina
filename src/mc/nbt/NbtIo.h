#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

namespace NbtIo {
// NOLINTBEGIN
// symbol:
// ?read@NbtIo@@YA?AV?$Result@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVIDataInput@@@Z
MCAPI class Bedrock::Result<std::unique_ptr<class CompoundTag>> read(class IDataInput& dis);

// symbol:
// ?readNamedCompoundTag@NbtIo@@YA?AV?$Result@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVIDataInput@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class Bedrock::Result<std::unique_ptr<class CompoundTag>> readNamedCompoundTag(class IDataInput&, std::string&);

// symbol:
// ?readNamedTag@NbtIo@@YA?AV?$Result@V?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@Verror_code@2@@Bedrock@@AEAVIDataInput@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class Bedrock::Result<std::unique_ptr<class Tag>> readNamedTag(class IDataInput&, std::string&);

// symbol:
// ?readOrGetEmpty@NbtIo@@YA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVIDataInput@@@Z
MCAPI std::unique_ptr<class CompoundTag> readOrGetEmpty(class IDataInput&);

// symbol: ?write@NbtIo@@YAXPEBVCompoundTag@@AEAVIDataOutput@@@Z
MCAPI void write(class CompoundTag const*, class IDataOutput&);

// symbol:
// ?writeNamedTag@NbtIo@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVTag@@AEAVIDataOutput@@@Z
MCAPI void writeNamedTag(std::string const&, class Tag const&, class IDataOutput&);
// NOLINTEND

}; // namespace NbtIo
