#pragma once

class ContainerContentChangeListener {
public:
    virtual void ContainerContentChanged(int) = 0;
    virtual ~ContainerContentChangeListener(){};
};