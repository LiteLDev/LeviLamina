/**
 * @file  ItemStackResponseContainerInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ItemStackResponseContainerInfo.
 *
 */
struct ItemStackResponseContainerInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKRESPONSECONTAINERINFO
public:
    struct ItemStackResponseContainerInfo& operator=(struct ItemStackResponseContainerInfo const &) = delete;
    ItemStackResponseContainerInfo(struct ItemStackResponseContainerInfo const &) = delete;
    ItemStackResponseContainerInfo() = delete;
#endif

public:
    /**
     * @symbol  ??0ItemStackResponseContainerInfo\@\@QEAA\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI ItemStackResponseContainerInfo(enum class ContainerEnumName);
    /**
     * @symbol  ??1ItemStackResponseContainerInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackResponseContainerInfo();

};