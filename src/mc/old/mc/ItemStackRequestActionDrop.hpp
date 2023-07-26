/**
 * @file  ItemStackRequestActionDrop.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionDrop.
 *
 */
class ItemStackRequestActionDrop {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONDROP
public:
    class ItemStackRequestActionDrop& operator=(class ItemStackRequestActionDrop const &) = delete;
    ItemStackRequestActionDrop(class ItemStackRequestActionDrop const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackRequestActionDrop();
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
     * @symbol  ?_write\@ItemStackRequestActionDrop\@\@MEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl  5
     * @symbol  ?_read\@ItemStackRequestActionDrop\@\@MEAA_NAEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual bool _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ItemStackRequestActionDrop\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionDrop();
    /**
     * @symbol  ?getRandomly\@ItemStackRequestActionDrop\@\@QEBA_NXZ
     */
    MCAPI bool getRandomly() const;

};