#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "RC505.h"
#include "PropertyTreeView.h"

class SystemView : public Component {
public:
    SystemView(RC505::Library &Library);
    ~SystemView();

    // Component
    virtual void paint(Graphics &g) override;
    virtual void resized() override;

private:
    RC505::Library &_library;
    PropertyTreeView _propertyTreeView;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SystemView)
};
