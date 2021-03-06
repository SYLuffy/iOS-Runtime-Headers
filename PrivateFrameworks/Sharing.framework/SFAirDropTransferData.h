/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropTransferData : NSObject <NSSecureCoding> {
    NSString * _alertMessage;
    NSString * _alertTitle;
    int  _alertType;
    LSAppLink * _appLink;
    BOOL  _autoAccept;
    NSString * _bundleID;
    NSNumber * _bytesCopied;
    NSString * _contentType;
    NSDictionary * _contentTypes;
    NSError * _error;
    NSMutableDictionary * _fileExtensionsToTypes;
    UIImage * _fileIcon;
    NSArray * _files;
    NSNumber * _filesCopied;
    NSArray * _items;
    NSString * _itemsDescription;
    NSDictionary * _itemsDescriptionAdvanced;
    BOOL  _nonFileItem;
    BOOL  _onlyPhotosOrVideos;
    NSArray * _possibleApplicationDestinations;
    NSString * _recordID;
    BOOL  _saveToCloudDrive;
    LSApplicationProxy * _selectedApplicationDestination;
    NSString * _senderCompositeName;
    NSString * _senderComputerName;
    NSString * _senderEmail;
    NSString * _senderEmailHash;
    NSString * _senderFirstName;
    NSString * _senderID;
    BOOL  _senderIsMe;
    NSString * _senderLastName;
    BOOL  _soundPlayed;
    NSDate * _timeLastUserInteraction;
    NSNumber * _timeRemaining;
    NSNumber * _totalBytes;
    BOOL  _transferCompleted;
    SFAirDropTransferStateMachine * _transferStateMachine;
    int  _transferStateResetCount;
    BOOL  _undesiredMixOfItems;
    BOOL  _unknownFileType;
    BOOL  _unknownScheme;
    BOOL  _verifiableIdentity;
}

@property (nonatomic, copy) NSString *alertMessage;
@property (nonatomic, copy) NSString *alertTitle;
@property (nonatomic) int alertType;
@property (nonatomic, readonly) LSAppLink *appLink;
@property (getter=shouldAutoAccept, nonatomic) BOOL autoAccept;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) NSNumber *bytesCopied;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, readonly) NSDictionary *contentTypes;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) UIImage *fileIcon;
@property (nonatomic, readonly, copy) NSArray *fileNames;
@property (nonatomic, retain) NSArray *files;
@property (nonatomic, retain) NSNumber *filesCopied;
@property (nonatomic, readonly, copy) NSString *firstFileExtension;
@property (nonatomic, readonly, copy) NSString *firstFileName;
@property (nonatomic, readonly, copy) NSString *firstFileTypeDescription;
@property (nonatomic, readonly) NSURL *firstURL;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, copy) NSString *itemsDescription;
@property (nonatomic, retain) NSDictionary *itemsDescriptionAdvanced;
@property (getter=isNonFileItem, nonatomic, readonly) BOOL nonFileItem;
@property (getter=isOnlyPhotosOrVideos, nonatomic, readonly) BOOL onlyPhotosOrVideos;
@property (nonatomic, retain) NSArray *possibleApplicationDestinations;
@property (nonatomic, readonly, copy) NSString *recordID;
@property (nonatomic, readonly, copy) NSString *rejectedMessage;
@property (nonatomic) BOOL saveToCloudDrive;
@property (nonatomic, readonly, copy) NSString *searchAppStoreMessage;
@property (nonatomic, readonly, copy) NSString *selectAppMessage;
@property (nonatomic, retain) LSApplicationProxy *selectedApplicationDestination;
@property (nonatomic, copy) NSString *senderCompositeName;
@property (nonatomic, copy) NSString *senderComputerName;
@property (nonatomic, copy) NSString *senderEmail;
@property (nonatomic, copy) NSString *senderEmailHash;
@property (nonatomic, copy) NSString *senderFirstName;
@property (nonatomic, copy) NSString *senderID;
@property (nonatomic) BOOL senderIsMe;
@property (nonatomic, copy) NSString *senderLastName;
@property (nonatomic, readonly, copy) NSString *senderName;
@property (nonatomic) BOOL soundPlayed;
@property (nonatomic, retain) NSDate *timeLastUserInteraction;
@property (nonatomic, retain) NSNumber *timeRemaining;
@property (nonatomic, retain) NSNumber *totalBytes;
@property (nonatomic) BOOL transferCompleted;
@property (nonatomic, readonly) SFAirDropTransferStateMachine *transferStateMachine;
@property (nonatomic, readonly) int transferStateResetCount;
@property (getter=isUndesiredMixOfItems, nonatomic, readonly) BOOL undesiredMixOfItems;
@property (getter=isUnknownFileType, nonatomic, readonly) BOOL unknownFileType;
@property (getter=isUnknownScheme, nonatomic, readonly) BOOL unknownScheme;
@property (getter=isValid, nonatomic, readonly) BOOL valid;
@property (getter=isVerifiableIdentity, nonatomic) BOOL verifiableIdentity;

+ (id)airDropTransferDataWithRecordID:(id)arg1;
+ (id)archivedTransferName;
+ (id)archivedTransfers;
+ (id)archivedTransfersBaseURL;
+ (void)cleanupTransferWithRecordID:(id)arg1;
+ (id)loadFromURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)transferURLForRecordID:(id)arg1;
+ (id)validateTransferFolder:(id)arg1 withRecordID:(id)arg2;

- (void).cxx_destruct;
- (id)alertMessage;
- (id)alertTitle;
- (int)alertType;
- (id)appLink;
- (void)applyTransferState:(id)arg1;
- (void)archive;
- (void)archiveToURL:(id)arg1;
- (id)bundleID;
- (id)bytesCopied;
- (id)contentType;
- (id)contentTypes;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)fileIcon;
- (id)fileNames;
- (id)files;
- (id)filesCopied;
- (id)firstFileExtension;
- (id)firstFileName;
- (id)firstFileTypeDescription;
- (id)firstURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1;
- (void)initializeAlertStrings;
- (BOOL)isNonFileItem;
- (BOOL)isOnlyPhotosOrVideos;
- (BOOL)isUndesiredMixOfItems;
- (BOOL)isUnknownFileType;
- (BOOL)isUnknownScheme;
- (BOOL)isValid;
- (BOOL)isVerifiableIdentity;
- (id)items;
- (id)itemsDescription;
- (id)itemsDescriptionAdvanced;
- (id)messageAndAlertTitle:(id*)arg1 buttonTitle:(id*)arg2;
- (id)messageInProgress:(BOOL)arg1 completed:(BOOL)arg2 alertTitle:(id*)arg3 buttonTitle:(id*)arg4;
- (id)messageLocalizedKeyWithTypes:(id)arg1 isTrustedPerson:(BOOL)arg2 isInProgress:(BOOL)arg3 isCompleted:(BOOL)arg4;
- (id)possibleApplicationDestinations;
- (id)progressMessageAndAlertTitle:(id*)arg1;
- (id)recordID;
- (id)rejectedMessage;
- (void)removeItem:(id)arg1;
- (void)resetTransferState;
- (BOOL)saveToCloudDrive;
- (id)searchAppStoreMessage;
- (id)selectAppMessage;
- (id)selectedApplicationDestination;
- (id)senderCompositeName;
- (id)senderComputerName;
- (id)senderEmail;
- (id)senderEmailHash;
- (id)senderFirstName;
- (id)senderID;
- (BOOL)senderIsMe;
- (id)senderLastName;
- (id)senderName;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setAlertType:(int)arg1;
- (void)setAutoAccept:(BOOL)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBytesCopied:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFileIcon:(id)arg1;
- (void)setFiles:(id)arg1;
- (void)setFilesCopied:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsDescription:(id)arg1;
- (void)setItemsDescriptionAdvanced:(id)arg1;
- (void)setPossibleApplicationDestinations:(id)arg1;
- (void)setSaveToCloudDrive:(BOOL)arg1;
- (void)setSelectedApplicationDestination:(id)arg1;
- (void)setSenderCompositeName:(id)arg1;
- (void)setSenderComputerName:(id)arg1;
- (void)setSenderEmail:(id)arg1;
- (void)setSenderEmailHash:(id)arg1;
- (void)setSenderFirstName:(id)arg1;
- (void)setSenderID:(id)arg1;
- (void)setSenderIsMe:(BOOL)arg1;
- (void)setSenderLastName:(id)arg1;
- (void)setSoundPlayed:(BOOL)arg1;
- (void)setTimeLastUserInteraction:(id)arg1;
- (void)setTimeRemaining:(id)arg1;
- (void)setTotalBytes:(id)arg1;
- (void)setTransferCompleted:(BOOL)arg1;
- (void)setVerifiableIdentity:(BOOL)arg1;
- (BOOL)shouldAutoAccept;
- (BOOL)soundPlayed;
- (id)timeLastUserInteraction;
- (id)timeRemaining;
- (id)totalBytes;
- (id)transferCompleteMessageAndAlertTitle:(id*)arg1;
- (BOOL)transferCompleted;
- (id)transferStateMachine;
- (int)transferStateResetCount;
- (id)typeForFileExtension:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (BOOL)userHasAcknowledgedTransfer;

@end
