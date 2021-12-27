/*
  ==============================================================================

    UtilityComponents.h
    Created: 27 Dec 2021 7:17:28pm
    Author:  길수민

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct Placeholder : juce::Component
{
    Placeholder();
    
    void paint(juce::Graphics& g) override;
    
    juce::Colour customColor;
};


struct RotarySlider : juce::Slider
{
    RotarySlider();

};
