/**
 * @file  StructureCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureCommand.
 *
 */
class StructureCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURECOMMAND
public:
    class StructureCommand& operator=(class StructureCommand const &) = delete;
    StructureCommand(class StructureCommand const &) = delete;
    StructureCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureCommand();
    /**
     * @hash   -1676800885
     * @vftbl  1
     * @symbol  ?execute\@StructureCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   613180460
     * @symbol  ?setup\@StructureCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   1475393605
     * @symbol  ?_delete\@StructureCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _delete(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1361128352
     * @symbol  ?_getFullName\@StructureCommand\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _getFullName() const;
    /**
     * @hash   1003743046
     * @symbol  ?_isValidSize\@StructureCommand\@\@AEBA_NAEBVBlockPos\@\@AEBVDimensionHeightRange\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool _isValidSize(class BlockPos const &, class DimensionHeightRange const &, class CommandOutput &) const;
    /**
     * @hash   1101691504
     * @symbol  ?_load\@StructureCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _load(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1357944967
     * @symbol  ?_save\@StructureCommand\@\@AEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void _save(class CommandOrigin const &, class CommandOutput &) const;

private:

};