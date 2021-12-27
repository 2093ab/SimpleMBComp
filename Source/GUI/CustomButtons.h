/*
  ==============================================================================

    CustomButtons.h
    Created: 27 Dec 2021 7:12:40pm
    Author:  길수민

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct PowerButton : juce::ToggleButton { };

struct AnalyzerButton : juce::ToggleButton
{
    void resized() override;
    
    juce::Path randomPath;
};
