/**
 * @file  TickingAreaCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickingAreaCommand.
 *
 */
class TickingAreaCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREACOMMAND
public:
    class TickingAreaCommand& operator=(class TickingAreaCommand const &) = delete;
    TickingAreaCommand(class TickingAreaCommand const &) = delete;
    TickingAreaCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TickingAreaCommand();
    /**
     * @hash   1328362890
     * @vftbl  1
     * @symbol ?execute@TickingAreaCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -570121567
     * @symbol ?formatTickingAreaList@TickingAreaCommand@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@3@@Z
     */
    MCAPI static std::string formatTickingAreaList(std::vector<struct TickingAreaDescription> const &);
    /**
     * @hash   2010902684
     * @symbol ?setup@TickingAreaCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -115551462
     * @symbol ?_add@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     */
    MCAPI void _add(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    /**
     * @hash   -2059769771
     * @symbol ?_list@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     */
    MCAPI void _list(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    /**
     * @hash   -1239334030
     * @symbol ?_preload@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     */
    MCAPI void _preload(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    /**
     * @hash   372152443
     * @symbol ?_remove@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     */
    MCAPI void _remove(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;
    /**
     * @hash   -575221610
     * @symbol ?_removeAll@TickingAreaCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAVLevel@@AEAVDimension@@@Z
     */
    MCAPI void _removeAll(class CommandOrigin const &, class CommandOutput &, class Level &, class Dimension &) const;

private:

};