/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy) NSArray * definitionEntries;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * origin;
@property(copy) NSString * partOfSpeech;
@property(readonly) Class superclass;
@property(copy) NSArray * synonyms;

+ (id)definitionGroup;
+ (id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)definitionEntries;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)origin;
- (id)partOfSpeech;
- (void)setDefinitionEntries:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPartOfSpeech:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;

@end