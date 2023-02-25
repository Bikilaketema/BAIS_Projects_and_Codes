-- MySQL dump 10.13  Distrib 8.0.32, for Win64 (x86_64)
--
-- Host: localhost    Database: employeedatabase
-- ------------------------------------------------------
-- Server version	8.0.32

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `departments`
--

DROP TABLE IF EXISTS `departments`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `departments` (
  `code` char(5) NOT NULL,
  `name` varchar(60) DEFAULT NULL,
  `managerid` decimal(9,0) DEFAULT NULL,
  `subdeptof` char(5) DEFAULT NULL,
  PRIMARY KEY (`code`),
  KEY `managerid` (`managerid`),
  KEY `subdeptof` (`subdeptof`),
  CONSTRAINT `departments_ibfk_1` FOREIGN KEY (`managerid`) REFERENCES `employees` (`employeeid`),
  CONSTRAINT `departments_ibfk_2` FOREIGN KEY (`subdeptof`) REFERENCES `departments` (`code`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `departments`
--

LOCK TABLES `departments` WRITE;
/*!40000 ALTER TABLE `departments` DISABLE KEYS */;
INSERT INTO `departments` VALUES ('ACCNT','Department of Accounting',4,'ADMIN'),('ADMIN','Administration',3,NULL),('ENGNR','Department of Engineering.',9,'ICT'),('HRM','Department of Human Resource Management',10,NULL),('ICT','Department of Information Communication Technology',1,NULL),('LGL','Legal Department.',8,NULL),('MMGT','Department of Materials Management',2,NULL),('MRKTG','Department of Marketing and Sales.',6,'MMGT'),('RSCDV','Department of Research and Development.',7,'ADMIN'),('SCRT','Department of Cyber Security',5,NULL);
/*!40000 ALTER TABLE `departments` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `employees`
--

DROP TABLE IF EXISTS `employees`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `employees` (
  `employeeid` decimal(9,0) NOT NULL,
  `firstname` varchar(10) DEFAULT NULL,
  `lastname` varchar(20) DEFAULT NULL,
  `deptcode` char(5) DEFAULT NULL,
  `salary` decimal(9,2) DEFAULT NULL,
  PRIMARY KEY (`employeeid`),
  KEY `deptcode` (`deptcode`),
  CONSTRAINT `employees_ibfk_1` FOREIGN KEY (`deptcode`) REFERENCES `departments` (`code`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `employees`
--

LOCK TABLES `employees` WRITE;
/*!40000 ALTER TABLE `employees` DISABLE KEYS */;
INSERT INTO `employees` VALUES (1,'Bikila','Ketema','ICT',70000.00),(2,'Bilal','Jemal','MMGT',40000.00),(3,'Beniam','Amito','ADMIN',50000.00),(4,'Ashenafi','Degefe','ACCNT',34000.00),(5,'Beamlak','Girma','SCRT',67000.00),(6,'Abduba','Peter','MRKTG',100000.00),(7,'Jemal','Hussein','RSCDV',45000.00),(8,'James','Bond','LGL',64000.00),(9,'Chadwick','Boseman','ENGNR',77000.00),(10,'Will','Smith','HRM',56000.00);
/*!40000 ALTER TABLE `employees` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `projects`
--

DROP TABLE IF EXISTS `projects`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `projects` (
  `projectid` char(8) NOT NULL,
  `deptcode` char(5) DEFAULT NULL,
  `description` varchar(200) DEFAULT NULL,
  `startdate` date DEFAULT NULL,
  `enddate` date DEFAULT NULL,
  `revenue` decimal(12,2) DEFAULT NULL,
  PRIMARY KEY (`projectid`),
  KEY `deptcode` (`deptcode`),
  CONSTRAINT `projects_ibfk_1` FOREIGN KEY (`deptcode`) REFERENCES `departments` (`code`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `projects`
--

LOCK TABLES `projects` WRITE;
/*!40000 ALTER TABLE `projects` DISABLE KEYS */;
INSERT INTO `projects` VALUES ('BLDOFC','MMGT','Builing a modern building for our Compnay.','2023-02-05','2026-02-10',2000000.00),('CSTRN','SCRT','Giving cyber security training for the companys employees.','2023-01-05','2023-01-15',200000.00),('FINCRPT','ACCNT','Reveiewing year 2023 financial report.','2023-12-15','2023-12-30',600000.00),('HE','HRM','Hiring new employees.','2023-10-05','2024-03-30',180000.00),('IMPVEM','HRM','Improving employees moral and skills.','2023-07-05','2023-11-01',300000.00),('PCMPT','ICT','Purchasing latest computers for our organization.','2023-02-05','2023-03-30',400000.00),('PNTST','SCRT','Testing our organizations Information systems for vulnberabilities.','2023-08-01','2023-09-10',50000.00),('STNPRC','MMGT','Purchasing stationary materials for our company.','2023-01-01','2023-01-10',10000.00),('UPDSYSTM','ICT','Updating the companys Information System to make it fit in to the Latest Technlogys.','2023-03-18','2023-05-18',34000.00),('WEBDV','ICT','Developing a user friendly website for our Ourganization.','2023-07-05','2023-10-30',100000.00);
/*!40000 ALTER TABLE `projects` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `workson`
--

DROP TABLE IF EXISTS `workson`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `workson` (
  `employeeid` decimal(9,0) NOT NULL,
  `projectid` char(8) NOT NULL,
  `assignedtime` decimal(3,2) DEFAULT NULL,
  PRIMARY KEY (`employeeid`,`projectid`),
  KEY `projectid` (`projectid`),
  CONSTRAINT `workson_ibfk_1` FOREIGN KEY (`projectid`) REFERENCES `projects` (`projectid`),
  CONSTRAINT `workson_ibfk_2` FOREIGN KEY (`employeeid`) REFERENCES `employees` (`employeeid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `workson`
--

LOCK TABLES `workson` WRITE;
/*!40000 ALTER TABLE `workson` DISABLE KEYS */;
INSERT INTO `workson` VALUES (1,'PCMPT',0.15),(1,'WEBDV',0.35),(2,'STNPRC',0.10),(3,'HE',0.40),(5,'PNTST',0.50),(6,'UPDSYSTM',0.40),(7,'BLDOFC',0.85),(8,'CSTRN',0.25),(9,'FINCRPT',0.20),(10,'IMPVEM',0.15);
/*!40000 ALTER TABLE `workson` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-01-31 22:37:25
