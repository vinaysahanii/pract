PRACTICAL 1             1. 1   2. 101   3. 150    4. 228    5. 260   6. 317    7. 389   8. 441   9. 482   10. 556

Aim: Study and implementation of Infrastructure as a Service

Hardware / Software Required: Ubuntu operating system, Internet Cloud computing enables
companies to consume compute resources as a utility -- just like electricity -- rather than having
to build and maintain computing infrastructures in-house. Cloud computing promises several
attractive benefits for businesses and end users. Three of the main benefits of cloud computing
include:

Self-service provisioning: End users can spin up computing resources for almost any type of
workload on-demand.

Elasticity: Companies can scale up as computing needs increase and then scale down again as
demands decreases.
Pay per use: Computing resources are measured at a granular level, allowing users to pay only
for the resources and workloads they use Cloud computing services can be Private, Public or
Hybrid.

Private cloud services are delivered from a business' data center to internal users. This model
offers versatility and convenience, while preserving management, control and security. Internal
customers may or may not be billed for services through IT chargeback. In the Public cloud
model, a third-party provider delivers the cloud service over the Internet. Public cloud services
are sold on-demand, typically by the minute or the hour. Customers only pay for the CPU cycles,
storage or bandwidth they consume. Leading public cloud providers include Amazon Web
Services (AWS), Microsoft Azure, IBM/SoftLayer and Google Compute Engine. Hybrid cloud is
a combination of public cloud services and on-premises private cloud – with orchestration and
automation between the two. Companies can run mission-critical workloads or sensitive
applications on the private cloud while using the public cloud for workloads that must scale ondemand.
The goal of hybrid cloud is to create a unified, automated, scalable environment which
takes advantage of all that a public cloud infrastructure can provide, while still maintaining
control over mission-critical data.

Types of cloud computing:
IT people talk about three different kinds of cloud computing, where different services are being
provided for you. Note that there's a certain amount of vagueness about how these things are
defined and some overlap between them.

Infrastructure as a Service (IaaS) means you're buying access to raw computing hardware
over the Net, such as servers or storage. Since you buy what you need and pay-as-you-go, this is
often referred to as utility computing. Ordinary web hosting is a simple example of IaaS: you
pay a monthly subscription or a per-megabyte/gigabyte fee to have a hosting company serve up
files for your website from their servers.
Course:USCS602 Cloud Computing Rollno:31
Department of CS (2020-2021) VKKM 2 | P a g e
Software as a Service (SaaS) means you use a complete application running on someone else's
system. Web-based email and Google Documents are perhaps the best-known examples. Zoho is
another well-known SaaS provider offering a variety of office applications online.
Platform as a Service (PaaS) means you develop applications using Web-based tools so they
run on systems software and hardware provided by another company. So, for example, you
might develop your own ecommerce website but have the whole thing, including the shopping
cart, checkout, and payment mechanism running on a merchant's server. Force.com (from
salesforce.com) and the Google App Engine are examples of PaaS.

Advantages and disadvantages of cloud computing Advantages: The pros of cloud
computing are obvious and compelling. If your business is selling books or repairing shoes, why
get involved in the nitty gritty of buying and maintaining a complex computer system? If you
run an insurance office, do you really want your sales agents wasting time running anti-virus
software, upgrading word-processors, or worrying about hard-drive crashes? Do you really want
them cluttering your expensive computers with their personal emails, illegally shared MP3 files,
and naughty YouTube videos—when you could leave that responsibility to someone else? Cloud
computing allows you to buy in only the services you want, when you want them, cutting the
upfront capital costs of computers and peripherals. You avoid equipment going out of date and
other familiar IT problems like ensuring system security and reliability. You can add extra
services (or take them away) at a moment's notice as your business needs change. It's really
quick and easy to add new applications or services to your business without waiting weeks or
months for the new computer (and its software) to arrive.

Disadvantages: Instant convenience comes at a price. Instead of purchasing computers and
software, cloud computing means you buy services, so one-off, upfront capital costs become
ongoing operating costs instead. That might work out much more expensive in the long-term. If
you're using software as a service (for example, writing a report using an online word processor
or sending emails through webmail), you need a reliable, high speed, broadband Internet
connection functioning the whole time you're working. That's something we take for granted in
countries such as the United States, but it's much more of an issue in developing countries or
rural areas where broadband is unavailable. If you're buying in services, you can buy only what
people are providing, so you may be restricted to off-the-peg solutions rather than ones that
precisely meet your needs. Not only that, but you're completely at the mercy of your suppliers if
they suddenly decide to stop supporting a product you've come to depend on. (Google, for
example, upset many users when it announced in September 2012 that its cloud-based Google
Docs would drop support for old but de facto standard Microsoft Office file formats such as
.DOC, .XLS, and .PPT, giving a mere one week's notice of the change—although, after public
pressure, it later extended the deadline by three months.) Critics charge that cloud-computing is a
return to the bad-old days of mainframes and proprietary systems, where businesses are locked
into unsuitable, long-term arrangements with big, inflexible companies. Instead of using
"generative" systems (ones that can be added to and extended in exciting ways the developers
never envisaged), you're effectively using "dumb terminals" whose uses are severely limited by
the supplier. Good for convenience and security, perhaps, but what will you lose in flexibility?
And is such a restrained approach good for the future of the Internet as a whole? (To see why it
Course:USCS602 Cloud Computing Rollno:31
Department of CS (2020-2021) VKKM 3 | P a g e
may not be, take a look at Jonathan Zittrain's eloquent book The Future of the Internet—And
How to Stop It.)

Conclusion: Cloud computing enables a convenient and on-demand network access to a wide
range of resources. The different services and also the deployment models allow flexible service
provider interaction with minimal human intervention. It saves costs but also can lead to risk
issues and suspension of resources when in huge quantity


======================================================================================================

Practical 2

Aim: Installation and Configuration of virtualizing using KVM
Steps:

Step-1) Open terminal and update the system using below command
$sudo apt-get update

Step-2) Install the virtual manager using below command
$sudo apt-get install virt-manager

Step-3) To open the virt-manager write the below command
$sudo virt-manager

Step-4) Download the qemu-system using the below command
$sudo apt-get install qemu-system

Now download the iso file using the given link or you can download other iso file also
http://tinycorelinux.net/downloads.html

Step-5) Now again write the below command
$sudo virt-manager

Step-6) The above command will open the below window click on File→ New Virtual Machine

Step-7) Select the import existing disk image

Click on Forward
Step-8) Now browse the iso file that you downloaded on your system

Click on browse

Go to downloads

Select the iso file and click on open

After that select the OS type as ”Linux” and Version as “Ubuntu18.0.4LTS”
Step-9) Select the Boot TinyCore and press the Enter key

Step-10) Now the below window is of Tiny Core OS

Right click on screen and go to Application→ Terminal

Now perform some command in terminal



======================================================================================================



Practical-3

Aim: Study and implementation of Storage as a Service

Infrastructure as a Service

Infrastructure as a service (IaaS) is a form of cloud computing that provides
virtualized computing resources over the internet.

IaaS is one of the three main categories of cloud computing services, alongside
software as a service (SaaS) and platform as a service (PaaS)

IaaS quickly scales up and down with demand, letting you pay only for what you
use.

It helps you avoid the expense and complexity of buying and managing your own
physical servers and other datacenter infrastructure.

Procedure:

Step-1) Create account on zoho using the below link
mail.zoho.

Select Personal Email and Sign In with Google

Click on Agree to the Terms and Condition then click on Continue

Enter your email id and click on Create Mailbox

The above window will appear when your zoho account is
created. 

Step-2) Go to platform9 to Start your IaaS using below
link https://platform9.com
Enter your email id

Click on Use It Free

Click on Deploy Now

Select VM

Click on No for all and then click on Proceed anyway

Click on Proceed to Deployment and enter your details

Click on continue then you will get verification email on your mail write that code
in below window and create password

Click on Login Now it will redirect to Login Page write the email and password to
login on Platform9

After Login you the Dashboard window will appear in that window

Step-3) Add User

Write your friends email and select the activation email to the user option

Click on Next and give the Role to the user

Click on Complete after that the below window will show the users that you
craeted

Step-4) Go to Tenants

Click on Create a New Tenant and fill the Name and Description

Click on next.
After that you can change the roles



================================================================================================================

PRACTICAL 4

Aim: Study and implementation of Storage as a Service Using Google Drive.

Steps:
Step-1) Open the browser and login your Gmail Account then open the Google Drive

Step-2) Upload a file on google drive
Click on new→ File upload

After that browse the file that you want to upload on google drive

Click on open then you will get the message File Uploaded i.e., given below

Step-3) Upload a folder on google drive
Click on new→ Folder upload

Step-4) Now browse the folder that you want to upload on google drive

click on upload, after that you will get the pop-up i.e., given below

Click on upload, then you will get the message Folder Uploaded i.e., given below

Step-5)Create the Google Form
Click on new→ Google Forms→ Blank Form

After that you will get the below window
Click on No, Thanks
Then create your form i.e., given below



===============================================================================================================

Practical- 5
Aim: Study and implementation of identity management

What is Cloud Identity Management?

There’s been a movement in the past few years to innovate in the identity management space.
Most of that innovation has been around cloud identity management – shifting the process of
authentication and authorization to the cloud. Unfortunately, the initial take on this was
effectively single sign-on to web applications or what many have called IdaaS.

Definition of Cloud Identity Management:

Cloud identity management is a lot more than just a simple web app SSO solution. Think of
this next generation of IAM to be a holistic shift of the identity provider to the cloud. Called
Directory-as-a-Service®— or DaaS — this is the modern adaptation of the traditional, onprem
and legacy solutions, Microsoft Active Directory (AD) and Lightweight Directory
Access Protocol (LDAP). The modern adaptation of the directory service is optimized to be
used across any device, on any operating system, with any IT or Web-based application, and 
in the cloud for cloud, on-prem, or remote resources. Modern cloud IAM solutions are also
focused on being multi-protocol to enable virtually any IT resource to connect in their
‘native’ authentication language.
A Modern Cloud Identity Management Solution such as DaaS Lets You:
• Securely connect employees, their devices, IT applications (on-prem or the cloud), and
networks
• Enjoy zero management overhead, improved security and user manageability with your
directory service as a SaaS-based solution
• Connect your cloud servers (hosted at AWS, Google Cloud, or elsewhere) to your
existing AD or LDAP user store
• Extend your existing AD or LDAP directory to the cloud
• Manage your Windows, Linux, and Mac desktops, laptops, and servers regardless of
location
• Connect users to applications that leverage either LDAP or SAML-based authentication
• Manage user access to WiFi networks securely through a cloud RADIUS service
• GPO-like capabilities across Mac, Windows, and Linux devices
• System-based and application-level multi-factor authentication (2FA)
In a sense, all of these capabilities are creating a True Single Sign-On™ platform that
connects users

Step 1: Go to https://my.pcloud.com/ and sign in using google

Step 2: A new screen will appear in which you can see the files or folders uploaded by you
on the pCloud Service, you can upload files & folders by clicking upload Button

Step 3: The file that you uploaded will appear in the Files list. Click the share button now.

Step 4: You can click the Email Icon to send the link to access your file via an email

Step 5: It will show a success if a file is successfully sent
You can check your shared folders/files in the Shared->Links/Folders menu

You can delete a file by selecting it and clicking More-> Delete

In Files-> Trash you can Check/Restore or Permanently Delete Items


==========================================================================================================


Practical-6
Aim: Study Cloud Security Management

Security using MFA (Multi Factor Authentication) device code:
Steps:
Step-1) Go to https://aws.amazon.com/

Click on Create an AWS Account then fill the required filed

Click on Continue

Select Personal and fill the required field

Click on Continue
Don’t give any card credentials only click on continue then wait for 5-10 min you will get
an email from AWS.

Click on Continue and wait for email

After getting email click on Access Account

Select IAM user and give the Account ID then click on next

Give the password after that the below window will appear

Step-2) Go to services and Select IAM

Then in Access management select User i.e., given below

Click on User

Click on Add User and give the Username and select Access Type

Click on Next Permission and click on Create Group

Then click on Next Tags after that give the group name

Click on Create Group

Click on next Tags then assign the Key

Click on Next Review

Click on Create User after that yow will get the success message i.e., given below

Click on close, it will redirect you to dashboard

Step-3) To check the Account ID click on your username

Click on My access key in the Quick links

Extend the MAF

Click on Activate MFA and select Virtual MFA device

Click on continue after that the below window will appear for that you need to scan that QR code
on your mobile phone using barcode scanner (install it in mobile phone) you also need to install
"Google Authenticator" in your mobile phone to generate the MFA code Google authenticator
will keep on generating a new MFA code after every 60 seconds that code you will have to enter
while logging as a user. Hence, the security is maintained by the MFA device code... 
One cannot use your AWS account even if it may have your username and password because MFA code is
on your MFA device (mobile phone in this case) and it is getting changed after every 60 seconds.

Then click on Assign MFA you will get the below message


================================================================================================================


Practical-7

Aim: Write a program for web feed

Steps:

- First, open Notepad and write the following XML code in it.
<?xml version="1.0" encoding="UTF-8"?>

<rss version="2.0">
<channel>
 <title>W3Schools Home Page</title>
 <link>https://www.w3schools.com</link>
 <description>Free web building tutorials</description>
 <item>
  <title>RSS Tutorial</title>
  <link>https://www.w3schools.com/xml/xml_rss.asp</link>
  <description>New RSS tutorial on W3Schools</description>
 </item>
 <item>
  <title>XML Tutorial</title>
  <link>https://www.w3schools.com/xml</link>
  <description>New XML tutorial on W3Schools</description>
 </item>
</channel>
</rss>

- Save the as “Test.xml”
- Now open Chrome (If not Installed than install it and open)
- Go to Link https://chrome.google.com/webstore/detail/rss-subscriptionextensio/
nlbjncdgjeocebhnmkbbbdekmmmcbfjd?hl=en
OR
- Search for chrome.google.com and go to Extensions
- Now Search for “RSS Subscription Extension (by Google)”
- Click button add to chrome
- After that Open Visual Studio 2010 → New Project → Web Site → ASP.NET Web
Site
- Now Copy-Paste the test.xml file in this project.
- Open file “Default.aspx” and add a single line on it.
<a href="test.xml">Test</a>
Now for Run the application
- (In the Project Solution window) Right-click a project name
- Select Browse With...
- Select Google Chrome and Browse
- Chrome window will appear
- Select Test
- Final output


================================================================================================================


Practical-8
Aim: Study and implementation of Single-Sing-On
Steps:
Step-1) Go to the auth link i.e., given below
https://auth0.com/

Go to signup

Sign up with google

Step-2) Now give the tenant domain

Click on next

Step-3) Select personal account

Click on create account

Step-4) Now go to add a social login provider

Click on add social connections

Then click on create connection

Select any social connection

Click on continue and go to the last

Click on create then go to Social Connection to the connection is added or not
Here GITHUB is added

Step-5) Go to Getting Started

click on Try it out then login through your email and password or choose Google sign in
After that it will redirect to the below window



=======================================================================================================


Practical-9

Aim: User management in Cloud

Steps:
Step-1) Open Link: https://en.ocloud.de/product/owncloud.html

Select anyone from there

Click on Info/Demo

Click on Demo

Use above credentials to login demo account and click on Demo cloud

After that the below window will open

Step-2) Upload one file click on + button then select Upload

Browse the file that you want to store in cloud

Click on Open after that file will be uploaded see the below window

Step-3) Share your file

Go to sharing click on Public Link then click on Create Public link

After that fill the information i.e., given below

Click on Share

After that the below window will open

Go to your link that you created and copy it after that paste it in browser

Paste on new tab

Then give the password to authenticate

After that you can download that file

Step-4) Again go to https://en.ocloud.de/product/owncloud.html then Select the different Cloud
i.e., NextCloud

Select anyone from there

Click on Info/Demo

Click on Demo

Click on Demo Cloud

Fill the credentials then click on Login

Step-5) Upload the file Click on + sign the select Upload File

Then browse the file tat you ant to store in cloud

Click on Open

File is uploaded successfully

Step-6) Share the file

Click on share button of file that you selected

Click on create share link

After that copy the link and paste it on new browser to get the file i.e., given below


=============================================================================================================


PRACTICAL 10

Case Study – Microsoft Azure

What is Microsoft azure
Microsoft Azure, commonly referred to as Azure is a cloud computing service
created by Microsoft for building, testing, deploying, and managing applications
and services through Microsoft-managed data centers. It provides software as a
service (SaaS), platform as a service (PaaS) and infrastructure as a service
(IaaS) and supports many different programming languages, tools, and
frameworks, including both Microsoft-specific and third-party software and
systems. Azure is the largest commercial cloud vendor by revenue, although 
designation stems in part from the company's "power of incumbency in Office 365
Commercial and Microsoft 365, which may artificially inflate the company's "pure
cloud" revenue totals

Why to choose Azure for your Enterprise
l Enterprises across the globe are realizing great success with business
solutions powered by Cloud. They are redefining the way they do business
with scalable & secure cloud-enabled enterprise applications. Globally,
90% of Fortune 500 companies are using Microsoft Azure to drive their
business. Using deeply-integrated Azure cloud services, enterprises can
rapidly build, deploy, and manage simple to complex applications with
ease. Azure supports a wide range of programming languages, frameworks,
operating systems, databases, and devices, allowing enterprises to leverage
tools and technologies they trust.

Infrastructure as a Service (IaaS) and Platform as a Service (PaaS)
capabilities:
l Azure boasts an enticing combination of IaaS and PaaS services. IaaS
enables enterprises to outsource their infrastructure on Azure and pay for
what they use and PaaS lets them create their own web apps & solutions
without having to buy and maintain the underlying groundwork. Top Azure
consultants from the Microsoft partner community can work with
Enterprises to leverage Azure PaaS & IaaS to build enterprise apps on the
Cloud for accelerated business growth.
Security Offerings:
l Security Development Lifecycle (SDL) is an industry leading security
process on which Azure has been designed. It comprises security at its core
and private data & services stay safe and secure on Azure Cloud. Microsoft
Azure offers the was the best compliance coverage of over 50 compliance
offerings and is the most trusted cloud platform by U.S. government
institutions. Also, it is the first to embrace the new international standard
for Cloud privacy, ISO 27018. Thus, Microsoft guarantees the best in terms
of safety for all operations and data on the Azure Cloud.
Scalability and Ductility:
l Applications that run easily, unaffectedly and scale from 10 to 10 million
users can be created without any additional coding by using Azure.
Azure Storage provides ductile, safe, secure and performance-efficient
storage services in cloud. It becomes simpler to change settings and use
more processors for the application to use.
Hybrid Capabilities:
l Azure has hybrid capabilities that makes it unique. Azure facilitates easy
mobility and a reliable consistent platform between on-premise and public
Cloud. Azure provides a broader range of hybrid connections including
virtual private networks (VPNs), caches, content delivery networks
(CDNs), and ExpressRoute connections to improve usability and
performance.

Analytics and Intelligence capabilities:

l Azure facilitates SQL and NoSQL data services and built-in support for
digging deeper into data and uncovering key insights for improving
business processes and decision making. Azure is the only cloud platform
that offers Blockchain as a Service (BaaS), Machine Learning, Bots, and
Cognitive APIs capabilities.

Cost Efficient Platform:

l Microsoft’s pay-as-you-go model allows you to pay for what you use
to build or expand resources using Azure services. This cuts down the
IT administration costs to a minimum as infrastructure is taken care by
Microsoft on Azure. It connects datacenters to the cloud effortlessly
and supports 42 regions like no other cloud provider.
Interoperability:

l Amalgamated applications can be developed for on-premises applications
such as cloud database with Azure. Azure aids Internet protocols and open
standards such as XML, SOAP, REST and HTTP. A software
development kit for Java, PHP, and Ruby is available for applications
written in those languages and Azure tools for Eclipse.
Identity & Access Management (IAM):

l Azure offers secure IAM capabilities with Azure Active Directory service
to enable right users to access the right information. With Azure,
Enterprises can adopt mature IAM capabilities to reduce identity
management costs and become more agile, thus supporting innovative
business initiatives.


IDENTITY

l Azure Active Directory is used to synchronize on-premises directories and
enable single sign-on.

l Azure Active Directory B2C allows the use of consumer identity and access
management in the cloud.

l Azure Active Directory Domain Services is used to join Azure virtual
machines to a domain without domain controllers.

l Azure information protection can be used to protect sensitive information.
MOBILE SERVICES

l Mobile Engagement collects real-time analytics that highlight users’
behavior. It also provides push notifications to mobile devices.

l HockeyApp can be used to develop, distribute, and beta-test mobile apps.

STORAGE SERVICES

l Storage Services provides REST and SDK APIs for storing and accessing
data on the cloud.

l Table Service lets programs store structured text in partitioned collections of
entities that are accessed by partition key and primary key. Azure Table
Service is a NoSQL non-relational database.

l Blob Service allows programs to store unstructured text and binary data as
blobs that can be accessed by an HTTP(S) path. Blob service also provides
security mechanisms to control access to data.

l Queue Service lets programs communicate asynchronously by message
using queues.

l File Service allows storing and access of data on the cloud using
the REST APIs or the SMB protocol


