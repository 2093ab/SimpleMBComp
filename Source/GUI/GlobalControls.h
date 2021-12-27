/*
  ==============================================================================

    GlobalControls.h
    Created: 27 Dec 2021 7:28:23pm
    Author:  길수민

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "RotarySliderWithLabels.h"

struct GlobalControls : juce::Component
{
    GlobalControls(juce::AudioProcessorValueTreeState& apvts);
    
    void paint(juce::Graphics& g) override;
    
    void resized() override;
private:
    using RSWL = RotarySliderWithLabels;
    std::unique_ptr<RSWL> inGainSlider, lowMidXoverSlider, midHighXoverSlider, outGainSlider;
    
    using Attachment = juce::AudioProcessorValueTreeState::SliderAttachment;
    std::unique_ptr<Attachment> lowMidXoerSliderAttachment, midHighXoverSliderAttachment, inGainSliderAttachment, outGainSliderAttachment;
    
};
