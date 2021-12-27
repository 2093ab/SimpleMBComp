/*
  ==============================================================================

    UtilityComponents.cpp
    Created: 27 Dec 2021 7:17:28pm
    Author:  길수민

  ==============================================================================
*/

#include "UtilityComponents.h"

//==============================================================================
Placeholder::Placeholder()
{
    juce::Random r;
    customColor = juce::Colour(r.nextInt(255), r.nextInt(255), r.nextInt(255));
}

void Placeholder::paint(juce::Graphics& g)
{
    g.fillAll(customColor);
}

RotarySlider::RotarySlider() :
juce::Slider(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag,
             juce::Slider::TextEntryBoxPosition::NoTextBox)
{ }
