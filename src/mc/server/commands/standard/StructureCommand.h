#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class StructureCommand : public ::Command {

public:
    // prevent constructor by default
    StructureCommand& operator=(StructureCommand const&) = delete;
    StructureCommand(StructureCommand const&)            = delete;
    StructureCommand()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@StructureCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@StructureCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?_delete\@StructureCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _delete(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol
     * ?_getFullName\@StructureCommand\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _getFullName() const; // NOLINT
    /**
     * @symbol
     * ?_isValidSize\@StructureCommand\@\@AEBA_NAEBVBlockPos\@\@AEBVDimensionHeightRange\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool
    _isValidSize(class BlockPos const&, class DimensionHeightRange const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?_load\@StructureCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _load(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?_save\@StructureCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _save(class CommandOrigin const&, class CommandOutput&) const; // NOLINT

private:
};
