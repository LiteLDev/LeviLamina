/**
 * @file  AttributeInstanceHandle.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeInstanceHandle.
 *
 */
class AttributeInstanceHandle {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCEHANDLE
public:
    class AttributeInstanceHandle& operator=(class AttributeInstanceHandle const &) = delete;
    AttributeInstanceHandle(class AttributeInstanceHandle const &) = delete;
    AttributeInstanceHandle() = delete;
#endif

public:
    /**
     * @symbol  ?getAttributeID\@AttributeInstanceHandle\@\@QEBA?BIXZ
     */
    MCAPI unsigned int const getAttributeID() const;
    /**
     * @symbol  ?getInstance\@AttributeInstanceHandle\@\@QEBAAEBVAttributeInstance\@\@XZ
     */
    MCAPI class AttributeInstance const & getInstance() const;
    /**
     * @symbol  ?getMutableInstance\@AttributeInstanceHandle\@\@QEBAPEAVAttributeInstance\@\@XZ
     */
    MCAPI class AttributeInstance * getMutableInstance() const;
    /**
     * @symbol  ?inheritFrom\@AttributeInstanceHandle\@\@QEAAXAEBV1\@PEAVBaseAttributeMap\@\@\@Z
     */
    MCAPI void inheritFrom(class AttributeInstanceHandle const &, class BaseAttributeMap *);
    /**
     * @symbol  ??8AttributeInstanceHandle\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeInstanceHandle const &) const;

};