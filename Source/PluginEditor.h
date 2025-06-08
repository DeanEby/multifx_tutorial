/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Multifx_tutorialAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Multifx_tutorialAudioProcessorEditor (Multifx_tutorialAudioProcessor&);
    ~Multifx_tutorialAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Multifx_tutorialAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Multifx_tutorialAudioProcessorEditor)
};
