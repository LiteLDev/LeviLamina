/**
 * @file  ItemStackRequestActionCraftLoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftLoom.
 *
 */
class ItemStackRequestActionCraftLoom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTLOOM
public:
    class ItemStackRequestActionCraftLoom& operator=(class ItemStackRequestActionCraftLoom const &) = delete;
    ItemStackRequestActionCraftLoom(class ItemStackRequestActionCraftLoom const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackRequestActionCraftLoom();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?_write\@ItemStackRequestActionCraftLoom\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl  5
     * @symbol  ?_read\@ItemStackRequestActionCraftLoom\@\@UEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ItemStackRequestActionCraftLoom\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftLoom();
    /**
     * @symbol  ?getPatternNameId\@ItemStackRequestActionCraftLoom\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getPatternNameId() const;

};