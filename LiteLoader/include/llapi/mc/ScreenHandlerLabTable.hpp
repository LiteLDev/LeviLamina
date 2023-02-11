/**
 * @file  ScreenHandlerLabTable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScreenHandlerLabTable.
 *
 */
class ScreenHandlerLabTable {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCREENHANDLERLABTABLE
public:
    class ScreenHandlerLabTable& operator=(class ScreenHandlerLabTable const &) = delete;
    ScreenHandlerLabTable(class ScreenHandlerLabTable const &) = delete;
    ScreenHandlerLabTable() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScreenHandlerLabTable();
    /**
     * @hash   -949475971
     * @vftbl  1
     * @symbol  ?handleAction\@ScreenHandlerLabTable\@\@MEAA?AW4ItemStackNetResult\@\@AEBVItemStackRequestAction\@\@\@Z
     */
    virtual enum class ItemStackNetResult handleAction(class ItemStackRequestAction const &);
    /**
     * @hash   167450602
     * @vftbl  2
     * @symbol  ?endRequest\@ScreenHandlerLabTable\@\@MEAA?AW4ItemStackNetResult\@\@XZ
     */
    virtual enum class ItemStackNetResult endRequest();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -986822596
     * @vftbl  4
     * @symbol  ?postRequest\@ScreenHandlerLabTable\@\@MEAAX_N\@Z
     */
    virtual void postRequest(bool);
    /**
     * @hash   -1353783615
     * @symbol  ??0ScreenHandlerLabTable\@\@QEAA\@AEBVContainerScreenContext\@\@AEAVItemStackRequestActionHandler\@\@\@Z
     */
    MCAPI ScreenHandlerLabTable(class ContainerScreenContext const &, class ItemStackRequestActionHandler &);

//private:
    /**
     * @hash   -1033185142
     * @symbol  ?_handleLabTableCombine\@ScreenHandlerLabTable\@\@AEAA?AW4ItemStackNetResult\@\@AEBV?$ItemStackRequestActionDataless\@$08\@\@\@Z
     */
    MCAPI enum class ItemStackNetResult _handleLabTableCombine(class ItemStackRequestActionDataless<9> const &);

private:

};