#pragma once

struct ContainerSizeChangeListener {
    virtual void ContainerSizeChanged(int) = 0;
    virtual ~ContainerSizeChangeListener(){};
};